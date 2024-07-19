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
#include <QFileDialog>
#include <QBuffer>
#include <QImageReader>
#include "database.h"
#include"homepage.h"
#include "Databasemanager.h"
#include<QSettings>
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
    userdatabase = DatabaseManager::instance().getDatabase();

     ////////////////////////////////////////////
    disconnect(ui->passwordslot, &QLineEdit::returnPressed, this, &User::on_signupbutton_clicked);
    /////////////////////////////////////////////
    ui->UploadImage->setText("Profile Picture");
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
ui->left->hide();
    /////////////////////////////////////////////////////



/////////////////////////////////////////////////////////
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
    qDebug()<<"inside the check length ";
    if(ispassword)
    {
        if(text.length() >= 8)
        {

                return true;


        }
        return false;
    }

     if(text.length() >= 8)
     {
        return true;
    }
    return false;

}
bool User::checkifalreadyexists(QString &users )
{
     // Check if the username already exists
    QSqlQuery checkQuery(userdatabase);
    checkQuery.prepare("SELECT user_id FROM userinfo WHERE user_id = :username");
    checkQuery.bindValue(":username", users);

    if (checkQuery.exec()) {
        return checkQuery.next(); // If a row exists, return true
    } else {

        return false;
    }

 }
bool User::adduserdata(QString &user_id , QString &password , QByteArray &myData)
 {
     QSqlQuery query(userdatabase);
     query.prepare("INSERT INTO userinfo (user_id, password , images) VALUES (:username, :password , :image)");
     query.bindValue(":username", user_id);
     query.bindValue(":password", encrypt(password));
     query.bindValue(":image" , myData);
     if (query.exec()) {
         return true;

     } else {
         return false;

     }
 }
 void User::setredusernamelineedit()
 {
     qDebug()<<"this has been called the red username line ";
     ui->usernameslot->setPlaceholderText("entere at least 8 characters");
     ui->usernameslot->setStyleSheet(
         "QLineEdit {"
         "border:2px solid red;"
         "background:none;"
         " }");
 }
 void User::setredpasswordlineedit()
 {
     qDebug()<<"the set red password line edit has been  called ";
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
     QString username = ui->usernameslot->text();
     QString password = ui->passwordslot->text();
     QString confirmPassword = ui->passwordslot_2->text();

     QMessageBox msg;
     msg.setStyleSheet("QMessageBox { background-color: white; color: black; }");

     if (!checklength(username, false)) {
         msg.warning(this, "Check Length", "You have to enter a username with 8 or more characters.");
         ui->usernameslot->clear();
         setredusernamelineedit();
         return; // Exit the function if username length is invalid
     }


     if (password != confirmPassword) {
         msg.warning(this, "Check Password", "You have to enter the same password twice.");
         ui->passwordslot->clear();
         ui->passwordslot_2->clear();
         setredpasswordlineedit();
         return; // Exit the function if passwords do not match
     }

     if (!checklength(password, true)) {
         msg.warning(this, "Check Length", "Enter password of length 8 or more.");
         ui->passwordslot->clear();
         ui->passwordslot_2->clear();
         setredpasswordlineedit();
         return; // Exit the function if password length is invalid
     }

     if (!containsSpecialCharAndNumber(password)) {
         msg.warning(this, "Security Warning", "For strengthening your password please enter at least one special character or number.");
         ui->passwordslot->clear();
         ui->passwordslot_2->clear();
         setredpasswordlineedit();
         return; // Exit the function if password does not meet security criteria
     }

     if (checkifalreadyexists(username)) {
         msg.warning(this, "Username Exists", "The username already exists. Please choose a different one.");
         ui->usernameslot->clear();
         setredusernamelineedit();
         return; // Exit the function if username already exists
     }
     if(myImage.isNull())
     {
         msg.warning(this , "Profile Picture" ,"Please select an approprite profile pic");
         return;
     }

     ui->signupbox->hide();
     ui->genre->show();
 }




void User::on_eye_clicked()
{
    if(count % 2==0)
    {
        ui->passwordslot->setEchoMode(QLineEdit::Normal);
        ui->passwordslot_2->setEchoMode(QLineEdit::Normal);
    ui->eye->setIcon(CloseEye);
        count++;
    }
    else
    {
        ui->passwordslot->setEchoMode(QLineEdit::Password);
        ui->passwordslot_2->setEchoMode(QLineEdit::Password);
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
    QSqlQuery myQuery(userdatabase);
    myQuery.prepare("SELECT password FROM userinfo WHERE user_id = :username");
    myQuery.bindValue(":username",uname);

    if (myQuery.exec())/* this check if query sqlite ma gayera execute vayo kinai vanera  */{
        if (myQuery.next()) { // Check if a row is returned
            QString databasepw = myQuery.value(0).toString(); // Get the password from the result
            if (decrypt(databasepw) == pw) {
                QSettings mysetting("myapp" ,"MovieMaestro");
                mysetting.setValue("isLogged", true);
                mysetting.setValue("username", ui->lusernameslot->text());
                User *myuser = new User();
                myuser->_username = ui->lusernameslot->text();

                HomePage *mypage = new HomePage(myuser);
                this->close();
                mypage->show();
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

    ui->lpasswordslot->setFocus();
}


void User::on_lpasswordslot_returnPressed()
{
    User::on_loginbutton_clicked();
}


void User::on_usernameslot_returnPressed()
{

}



void User::on_passwordslot_returnPressed()
{

}


void User::on_passwordslot_2_returnPressed()
{

}


void User::on_adminloginbtn_clicked()
{

    this->close();
    Admin *myadmin = new Admin();
    myadmin->show();
}


void User::on_submit_clicked()
{

    QString username = ui->usernameslot->text();
    QString password = ui->passwordslot->text();

    // Get genre selections
    horror = ui->horror->isChecked() ? 1 : 0;
    thriller = ui->thriller->isChecked() ? 1 : 0;
    romance = ui->romance->isChecked() ? 1 : 0;
    comedy = ui->comedy->isChecked() ? 1 : 0;
    rom_com = ui->romcom->isChecked() ? 1 : 0;
    drama = ui->drama->isChecked() ? 1 : 0;
    sci_fi = ui->scifi->isChecked() ? 1 : 0;
    history = ui->history->isChecked() ? 1 : 0;
    suspense = ui->suspense->isChecked() ? 1 : 0;
    action = ui->action->isChecked() ? 1 : 0;

    if(horror == 0 && thriller == 0 && romance == 0 && comedy == 0 && rom_com == 0 && drama == 0 && sci_fi == 0 && history == 0 && suspense == 0 && action == 0)
    {
        QMessageBox::warning(this , "User Preference" , "Please select at least one of the preferences.");
        return;
    }

    // Add user data
    bool isQueryPass = adduserdata(username, password,myData);
    if (!isQueryPass) {
        QMessageBox::critical(this, "Database Error", "Failed to add user data.");
        return;
    }

    // Update user preferences
    QSqlQuery query(userdatabase);
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
    query.bindValue(":username", username);

    if (query.exec()) {
        QSettings mysetting("myapp" ,"MovieMaestro");
        mysetting.setValue("isLogged", true);
        mysetting.setValue("username", ui->usernameslot->text());
        User *myuser = new User();
        myuser->_username = ui->usernameslot->text();
        HomePage *mypage = new HomePage(myuser);
        this->close();
        mypage->show();
    } else {
        qDebug() << "Error updating database: " << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + query.lastError().text());
    }
}



void User::on_left_clicked()
{
    //
}

void User::on_UploadImage_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));// yo function le upload garna lai euta prompt opne garxa and return ma chai tesko file location pathauxa
    if (filePath.isEmpty())
    {
        return;
    }
    QImage image(filePath); // yesma image upload hunxa image vanni variable ma with QImage data type
    if (image.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "The selected file is not a valid image.");
        return;
    }
    QByteArray imageData; // yesma image vanni variable lai arrayofbytes ma convert garne ho
    QBuffer buffer(&imageData);

    image.save(&buffer, "PNG"); // yo function le change garxa to appropriate fromat in our case PNG formate if needed
    myData = imageData;
    myImage = image;
    QPixmap pixmap;
    pixmap.loadFromData(imageData);
    ui->UploadImage->setText("");
    ui->UploadImage->setIcon(pixmap);

}


///////////////////////////////////////////////////////////////////////////
// Key matrix (2x2)
const QVector<QVector<int>> keyMatrix = {{3, 3}, {2, 5}};

// Character to integer mapping
int User::charToInt(QChar ch) {
    if (ch.isLower()) return ch.toLatin1() - 'a';
    if (ch.isUpper()) return ch.toLatin1() - 'A' + 26;
    if (ch.isDigit()) return ch.toLatin1() - '0' + 52;
    return ch.unicode() - 33 + 62; // Assuming spsecial characters start from '!' (ASCII 33)
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


