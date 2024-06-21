#ifndef ADMINOPTIONS_H
#define ADMINOPTIONS_H

#include <QWidget>

namespace Ui {
class adminoptions;
}

class adminoptions : public QWidget
{
    Q_OBJECT

public:
    explicit adminoptions(QWidget *parent = nullptr);
    ~adminoptions();

private slots:
    void on_Settings_clicked();

    void on_ExitButton_clicked();

    void on_LogOutButton_clicked();

private:
    Ui::adminoptions *ui;
    QIcon SettingsGlow,SettingsBack;
    bool SettingsClick;
};

#endif // ADMINOPTIONS_H
