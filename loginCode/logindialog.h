#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QDialog>
class QLabel;
class QLineEdit;
class QPushButton;

class LoginDialog : public QDialog
{
    Q_OBJECT //使用信号和槽等特性必须添加该宏
public:
    explicit LoginDialog(QWidget *parent = 0);
    LoginDialog();
};

#endif // LOGINDIALOG_H
