#include "user.h"
#include "ui_user.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>
#include<QGroupBox>
#include<admin.h>
#include<QVector>
User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User),
    OpenEye(":/OpenEye.png"),
    CloseEye(":/CloseEye.png"),
    Cross(":/close.png"),
    left(":/back icon.png")
{
    ui->setupUi(this);
    /////
    usernameslot = findChild<QLineEdit *>("usernameslot");//changed here this is how you find the child and use the same name of the datatpe that you defined in the header file
    passwordslot =findChild<QLineEdit *>("passwordslot");//changed here
    passwordslot_2 =findChild<QLineEdit *>("passwordslot_2"); // changed here
    QSqlDatabase userdatabase = QSqlDatabase::addDatabase("QSQLITE" , "myconnection"); //(this is optional but some times it shows a particular error ) here my connection is to say provide a unique id generally when we create a quey in slots the qt program already konws that we are doing referring to the given database but wheen we delcare a user defined function then the qt doesn't know what quey is to be passed where so we used myconnection unique id
      userdatabase.setDatabaseName(QCoreApplication::applicationDirPath()+"/../userdatabase.db");
    if(!userdatabase.open())
     {
         QMessageBox::warning(this , "database info", "failed to connect to the database"+ userdatabase.lastError().text(), QMessageBox::Ok);

     }
     else
    {
        QMessageBox::warning(this , "database info", " connect to the database", QMessageBox::Ok);


    }
     ui->clearconfirmpasswordbtn_2->hide();
    ui->clearpasswordbtn->hide();
     ui->clearusernamebtn->hide();
    ui->lclearpasswordbtn->hide();
     ui->lclearusernamebtn->hide();
     ui->left->setIcon(left);
     ui->horror->setAutoExclusive(false);
     ui->action->setAutoExclusive(false);
     ui->thriller->setAutoExclusive(false);
     ui->romance->setAutoExclusive(false);
     ui->comedy->setAutoExclusive(false);
     ui->romcom->setAutoExclusive(false);
     ui->drama->setAutoExclusive(false);
     ui->scifi->setAutoExclusive(false);
     ui->history->setAutoExclusive(false);
     ui->suspense->setAutoExclusive(false);
     setWindowTitle("Movie Maestro");
   setWindowIcon(QIcon(":/MM Transparent BG.png" ));
     ui->eye->setIcon(OpenEye);
    ui->clearconfirmpasswordbtn_2->setIcon(Cross);
    ui->clearpasswordbtn->setIcon(Cross);
ui->clearusernamebtn->setIcon(Cross);
    ui->loginbox->hide();
ui->leye->setIcon(OpenEye);
    ui->lclearusernamebtn->setIcon(Cross);
ui->lclearpasswordbtn->setIcon(Cross);
    ui->genre->hide();

}

User::~User()
{
    delete ui;
}
bool User::containsSpecialCharAndNumber(const QString &text)
{
    QRegularExpression specialCharRegex("[@#$%^&*()|\"';:<>?/~`!]");
    QRegularExpression numberRegex("\\d");

    return specialCharRegex.match(text).hasMatch() && numberRegex.match(text).hasMatch();
}
bool User::checklength(const QString &text, bool ispassword)///changed here
{
    if(ispassword)
    {
        if(text.length() >= 8)
        {

                return true;


        }
        else
        {return false;}
    }
    else
    {
        if(text.length() >= 8)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
bool User::checkifalreadyexists(QString &users )
{
     // Check if the username already exists
    QSqlQuery checkQuery(QSqlDatabase::database("myconnection"));
    checkQuery.prepare("SELECT user_id FROM userinfo WHERE user_id = :username");
    checkQuery.bindValue(":username", users);

    if (checkQuery.exec()) {
        return checkQuery.next(); // If a row exists, return true
    } else {

        return false;
    }

 }
bool User::adduserdata(QString &user_id , QString &password)
 {
     QSqlQuery query(QSqlDatabase::database("myconnection"));
     query.prepare("INSERT INTO userinfo (user_id, password) VALUES (:username, :password)");
     query.bindValue(":username", user_id);
     query.bindValue(":password", encrypt(password));

     if (query.exec()) {
         return true;

     } else {
         return false;

     }
 }
 void User::setredusernamelineedit()
 {
     ui->usernameslot->setPlaceholderText("entere at least 8 characters");
     ui->usernameslot->setStyleSheet(
         "QLineEdit {"
         "border:2px solid red;"
         "background:none;"
         " }");
 }
 void User::setredpasswordlineedit()
 {
     ui->passwordslot->setPlaceholderText("enter password");
     ui->passwordslot_2->setPlaceholderText("re-enter the same password");
     ui->passwordslot->setStyleSheet(
          "QLineEdit {"
          "border:2px solid red;"
          "background:none;"
          " }");
      ui->passwordslot_2->setStyleSheet(
         "QLineEdit {"
         "border:2px solid red;"
         "background:none;"
         " }");
  }
void User::on_signupbutton_clicked()
{
    QString username = usernameslot->text();
    QString password = passwordslot->text();
    QString confirmPassword = passwordslot_2->text();
    QMessageBox msg;
    msg.setStyleSheet("QMessageBox { background-color: white; color: black; }");
    if(checklength(username, false)) {
        if(password == confirmPassword)
        {
            if(checklength(password , true))
            {
                if(containsSpecialCharAndNumber(password))
                {
                    if(!(checkifalreadyexists(username)))
                    {
                       isquerypass =  adduserdata(username , password);
                        if(isquerypass)
                       {
                            QMessageBox::information(this, "Signup Successful", "User signed up successfully!");
                            ui->signupbox->hide();
                            ui->genre->show();

                       }
                        else
                        {
                            QMessageBox::warning(this, "Database Error", "Failed to insert data into the database: ");

                        }
                    }
                    else
                    {
                        QMessageBox::warning(this, "Username Exists", "The username already exists. Please choose a different one.", QMessageBox::Ok);
                        usernameslot->clear();
                        setredusernamelineedit();
                    }

                }
          else
                {
                    msg.warning(this , "SecurityWarning", "For strengthening your password please enter at least one special character or number");
                    passwordslot->clear();
                    passwordslot_2->clear();
                        setredpasswordlineedit();
                }
            }
            else
            {
                msg.warning(this , "MessageBox" , "enter password of length 8 or more ");
                passwordslot->clear();
                passwordslot_2->clear();
                setredpasswordlineedit();
            }
        }
        else
        { msg.warning(this, "Check Length", "You have to enter same password twice.");
            passwordslot->clear();
            passwordslot_2->clear();
            setredpasswordlineedit();
        }
    } else {
        msg.warning(this, "Check Length", "You have to enter a username with 8 or more characters.");
        usernameslot->clear();
         setredusernamelineedit();
        return; // Exit the function if username length is invalid
    }

}



void User::on_eye_clicked()
{
    if(count % 2==0)
    {
    passwordslot->setEchoMode(QLineEdit::Normal);
    passwordslot_2->setEchoMode(QLineEdit::Normal);
    ui->eye->setIcon(CloseEye);
        count++;
    }
    else
    {
        passwordslot->setEchoMode(QLineEdit::Password);
        passwordslot_2->setEchoMode(QLineEdit::Password);
        ui->eye->setIcon(OpenEye);
        count++;
    }
}


void User::on_clearusernamebtn_clicked()
{
    ui->usernameslot->clear();

}

void User::on_clearpasswordbtn_clicked()
{
    ui->passwordslot->clear();

}

void User::on_clearconfirmpasswordbtn_2_clicked()
{
    ui->passwordslot_2->clear();
}


void User::on_leye_clicked()
{
    if(lcount % 2==0)
    {
        ui->lpasswordslot->setEchoMode(QLineEdit::Normal);
        ui->leye->setIcon(CloseEye);
        lcount++;
    }
    else
    {
        ui->lpasswordslot->setEchoMode(QLineEdit::Password);

        ui->leye->setIcon(OpenEye);
        lcount++;
    }
}


void User::on_lclearusernamebtn_clicked()
{
    ui->lusernameslot->clear();
}


void User::on_lclearpasswordbtn_clicked()
{
    ui->lpasswordslot->clear();
}


void User::on_goback_clicked()
{
    ui->loginbox->hide();
    ui->signupbox->show();
}


void User::on_alreadyregistered_clicked()
{
    ui->signupbox->hide();
    ui->loginbox->show();
}


void User::on_loginbutton_clicked()
{
    QString pw = ui->lpasswordslot->text();
    QString uname = ui->lusernameslot->text();
    QSqlQuery myQuery(QSqlDatabase::database("myconnection"));
    myQuery.prepare("SELECT password FROM userinfo WHERE user_id = :username");
    myQuery.bindValue(":username",uname);

    if (myQuery.exec())/* this check if query sqlite ma gayera execute vayo kinai vanera  */{
        if (myQuery.next()) { // Check if a row is returned
            QString databasepw = myQuery.value(0).toString(); // Get the password from the result
            if (decrypt(databasepw) == pw) {
                QMessageBox::information(this, "Login Success", "Congratulations, you are logged in");
            } else {
                QMessageBox::warning(this, "Login Failure", "Incorrect password entered");
                ui->lpasswordslot->clear();
                // Later make this also red
                ui->lpasswordslot->clear();
                ui->lpasswordslot->setPlaceholderText("wrong password entered");
                ui->lpasswordslot->setStyleSheet(
                    "QLineEdit {"
                    "border:2px solid red;"
                    "background:none;"
                    " }");
            }
        } else {
            QMessageBox::warning(this, "Not Found", "Username not found");
            // Later add the red bordering in the lusernameslot
            ui->lusernameslot->clear();
            ui->lusernameslot->setPlaceholderText("wrong username entered");
            ui->lusernameslot->setStyleSheet(
                "QLineEdit {"
                "border:2px solid red;"
                "background:none;"
                " }");
        }
    } else {
        QMessageBox::critical(this, "Query Error", "Failed to execute query");
    }

}


void User::on_lusernameslot_returnPressed()
{

    User::on_loginbutton_clicked();
}


void User::on_lpasswordslot_returnPressed()
{
    User::on_loginbutton_clicked();
}


void User::on_usernameslot_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_passwordslot_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_passwordslot_2_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_adminloginbtn_clicked()
{
    this->close();
    Admin *myadmin = new Admin();
    myadmin->show();
}


void User::on_submit_clicked()
{
    horror = ui->horror->isChecked() ? 1:0;
    thriller = ui->thriller->isChecked() ? 1:0;
     romance= ui->romance->isChecked() ? 1:0;
    comedy = ui->comedy->isChecked() ? 1:0;
    rom_com = ui->romcom->isChecked() ? 1:0;
    drama = ui->drama->isChecked() ? 1:0;
    sci_fi = ui->scifi->isChecked() ? 1:0;
    history = ui->history->isChecked() ? 1:0;
    suspense = ui->suspense->isChecked() ? 1:0;
    action = ui->action->isChecked() ? 1:0;
    QSqlQuery query(QSqlDatabase::database("myconnection"));
    query.prepare("UPDATE userinfo SET horro = :horrorvalue, action = :actionvalue, thriller = :thrillervalue, romance = :romancevalue, comedy = :comedyvalue, rom_com = :rom_comvalue, drama = :dramavalue, sci_fi = :sci_fivalue, history = :historyvalue, suspense = :suspensevalue WHERE user_id = :username");
    query.bindValue(":horrorvalue", horror);
    query.bindValue(":actionvalue", action);
    query.bindValue(":thrillervalue", thriller);
    query.bindValue(":romancevalue", romance);
    query.bindValue(":comedyvalue", comedy);
    query.bindValue(":rom_comvalue", rom_com);
    query.bindValue(":dramavalue", drama);
    query.bindValue(":sci_fivalue", sci_fi);
    query.bindValue(":historyvalue", history);
    query.bindValue(":suspensevalue", suspense);
    query.bindValue(":username", usernameslot->text());
    if(query.exec())
    {
        qDebug()<<"database updated successfully";

    }
    else
    {
        qDebug()<<"erro updating database: "<<query.lastError().text();
    }
}


void User::on_left_clicked()
{
    ui->genre->hide();
    ui->signupbox->show();
}


void User::on_usernameslot_textChanged(const QString &arg1)
{

}
///////////////////////////////////////////////////////////////////////////
// Key matrix (2x2)
const QVector<QVector<int>> keyMatrix = {{3, 3}, {2, 5}};

// Character to integer mapping
int User::charToInt(QChar ch) {
    if (ch.isLower()) return ch.toLatin1() - 'a';
    if (ch.isUpper()) return ch.toLatin1() - 'A' + 26;
    if (ch.isDigit()) return ch.toLatin1() - '0' + 52;
    return ch.unicode() - 33 + 62; // Assuming special characters start from '!' (ASCII 33)
}

// Integer to character mapping
QChar User::intToChar(int num) {
    if (num < 26) return QChar('a' + num);
    if (num < 52) return QChar('A' + num - 26);
    if (num < 62) return QChar('0' + num - 52);
    return QChar(num - 62 + 33);
}

// Modulo function for positive results
int User::mod(int a, int b) {
    return (a % b + b) % b;
}

// Encrypt function
QString User::encrypt(const QString &plaintext) {
    int n = keyMatrix.size(); // Dimension of the key matrix
    int m = plaintext.size();
    if (m % n != 0) m += (n - m % n); // Pad plaintext length to multiple of n

    QString paddedText = plaintext;
    while (paddedText.size() < m) paddedText.append('x'); // Pad with 'x' for simplicity

    QVector<int> encryptedValues(m);

    // Convert plaintext to integers
    for (int i = 0; i < m; ++i) {
        encryptedValues[i] = charToInt(paddedText[i]);
    }

    // Encrypt in blocks of size n
    QString ciphertext;
    for (int i = 0; i < m; i += n) {
        QVector<int> block(n, 0);
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                block[j] += keyMatrix[j][k] * encryptedValues[i + k];
            }
            block[j] = mod(block[j], 92); // Modulo 92 for our character range
            ciphertext.append(intToChar(block[j]));
        }
    }

    return ciphertext;
}

// Decryption utility functions
int User::determinant(const QVector<QVector<int>> &matrix) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int User::modularInverse(int a, int m) {
    for (int x = 1; x < m; ++x) {
        if ((a * x) % m == 1) return x;
    }
    return -1; // No modular inverse found
}

// Inverse matrix calculation
QVector<QVector<int>> User::inverseMatrix(const QVector<QVector<int>> &matrix) {
    int det = determinant(matrix);
    int detInv = modularInverse(det, 92);

    QVector<QVector<int>> invMatrix(2, QVector<int>(2));
    invMatrix[0][0] = matrix[1][1] * detInv % 92;
    invMatrix[0][1] = -matrix[0][1] * detInv % 92;
    invMatrix[1][0] = -matrix[1][0] * detInv % 92;
    invMatrix[1][1] = matrix[0][0] * detInv % 92;

    for (auto &row : invMatrix) {
        for (auto &val : row) {
            val = mod(val, 92);
        }
    }
    return invMatrix;
}

// Decrypt function
QString User::decrypt(const QString &ciphertext) {
    int n = keyMatrix.size(); // Dimension of the key matrix
    int m = ciphertext.size();

    QVector<int> encryptedValues(m);
    for (int i = 0; i < m; ++i) {
        encryptedValues[i] = charToInt(ciphertext[i]);
    }

    QVector<QVector<int>> invMatrix = inverseMatrix(keyMatrix);

    QString plaintext;
    for (int i = 0; i < m; i += n) {
        QVector<int> block(n, 0);
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                block[j] += invMatrix[j][k] * encryptedValues[i + k];
            }
            block[j] = mod(block[j], 92); // Modulo 92 for our character range
            plaintext.append(intToChar(block[j]));
        }
    }

    return plaintext;
}
