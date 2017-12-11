/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *LoginButton;
    QPushButton *ExitButto;
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 54, 12));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 54, 12));
        LoginButton = new QPushButton(LoginDialog);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(40, 210, 75, 23));
        ExitButto = new QPushButton(LoginDialog);
        ExitButto->setObjectName(QStringLiteral("ExitButto"));
        ExitButto->setGeometry(QRect(210, 210, 75, 23));
        usrLineEdit = new QLineEdit(LoginDialog);
        usrLineEdit->setObjectName(QStringLiteral("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(140, 80, 113, 20));
        usrLineEdit->setCursor(QCursor(Qt::IBeamCursor));
        usrLineEdit->setEchoMode(QLineEdit::Normal);
        pwdLineEdit_2 = new QLineEdit(LoginDialog);
        pwdLineEdit_2->setObjectName(QStringLiteral("pwdLineEdit_2"));
        pwdLineEdit_2->setGeometry(QRect(140, 110, 113, 20));
        pwdLineEdit_2->setEchoMode(QLineEdit::Password);
        pwdLineEdit_2->setDragEnabled(true);
        pwdLineEdit_2->setReadOnly(false);

        retranslateUi(LoginDialog);
        QObject::connect(ExitButto, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        ExitButto->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        usrLineEdit->setText(QString());
        usrLineEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        pwdLineEdit_2->setPlaceholderText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
