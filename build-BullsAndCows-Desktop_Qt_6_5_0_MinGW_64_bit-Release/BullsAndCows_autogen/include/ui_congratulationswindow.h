/********************************************************************************
** Form generated from reading UI file 'congratulationswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGRATULATIONSWINDOW_H
#define UI_CONGRATULATIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CongratulationsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *m_lineEdit;
    QPushButton *m_pB_Decline;
    QLabel *m_label_attempts;
    QPushButton *m_pB_EnterName;
    QLabel *m_label_Name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CongratulationsWindow)
    {
        if (CongratulationsWindow->objectName().isEmpty())
            CongratulationsWindow->setObjectName("CongratulationsWindow");
        CongratulationsWindow->resize(320, 187);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CongratulationsWindow->sizePolicy().hasHeightForWidth());
        CongratulationsWindow->setSizePolicy(sizePolicy);
        CongratulationsWindow->setMinimumSize(QSize(320, 187));
        CongratulationsWindow->setMaximumSize(QSize(320, 187));
        CongratulationsWindow->setBaseSize(QSize(320, 180));
        CongratulationsWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(154, 175, 207);\n"
"}"));
        centralwidget = new QWidget(CongratulationsWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        m_lineEdit = new QLineEdit(centralwidget);
        m_lineEdit->setObjectName("m_lineEdit");
        m_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
" background-color: #FFFFFF;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));
        m_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_lineEdit, 2, 0, 1, 2);

        m_pB_Decline = new QPushButton(centralwidget);
        m_pB_Decline->setObjectName("m_pB_Decline");
        m_pB_Decline->setMinimumSize(QSize(60, 40));
        QFont font;
        font.setBold(true);
        m_pB_Decline->setFont(font);
        m_pB_Decline->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: #FFFFFF;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: #A9A9A9;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));

        gridLayout->addWidget(m_pB_Decline, 3, 1, 1, 1);

        m_label_attempts = new QLabel(centralwidget);
        m_label_attempts->setObjectName("m_label_attempts");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        m_label_attempts->setFont(font1);
        m_label_attempts->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_label_attempts, 0, 0, 1, 2);

        m_pB_EnterName = new QPushButton(centralwidget);
        m_pB_EnterName->setObjectName("m_pB_EnterName");
        m_pB_EnterName->setMinimumSize(QSize(60, 40));
        m_pB_EnterName->setFont(font);
        m_pB_EnterName->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: #FFFFFF;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: #A9A9A9;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));

        gridLayout->addWidget(m_pB_EnterName, 3, 0, 1, 1);

        m_label_Name = new QLabel(centralwidget);
        m_label_Name->setObjectName("m_label_Name");
        m_label_Name->setFont(font1);
        m_label_Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_label_Name, 1, 0, 1, 2);

        CongratulationsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CongratulationsWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 320, 22));
        CongratulationsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CongratulationsWindow);
        statusbar->setObjectName("statusbar");
        CongratulationsWindow->setStatusBar(statusbar);

        retranslateUi(CongratulationsWindow);

        QMetaObject::connectSlotsByName(CongratulationsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CongratulationsWindow)
    {
        CongratulationsWindow->setWindowTitle(QCoreApplication::translate("CongratulationsWindow", "MainWindow", nullptr));
        m_pB_Decline->setText(QCoreApplication::translate("CongratulationsWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        m_label_attempts->setText(QCoreApplication::translate("CongratulationsWindow", "\320\237\320\276\320\261\320\265\320\264\320\260! \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\277\321\213\321\202\320\276\320\272: ", nullptr));
        m_pB_EnterName->setText(QCoreApplication::translate("CongratulationsWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        m_label_Name->setText(QCoreApplication::translate("CongratulationsWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\264\320\273\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \321\200\320\265\320\272\320\276\321\200\320\264\320\276\320\262:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CongratulationsWindow: public Ui_CongratulationsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGRATULATIONSWINDOW_H
