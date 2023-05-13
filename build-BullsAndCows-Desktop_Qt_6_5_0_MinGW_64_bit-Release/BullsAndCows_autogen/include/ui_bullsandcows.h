/********************************************************************************
** Form generated from reading UI file 'bullsandcows.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BULLSANDCOWS_H
#define UI_BULLSANDCOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BullsAndCows
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *m_pB_records;
    QLabel *m_label_top;
    QPushButton *m_pB_Attempt;
    QPushButton *m_pB_NewGame;
    QLabel *label;
    QLineEdit *m_lineEdit;
    QTableWidget *m_tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BullsAndCows)
    {
        if (BullsAndCows->objectName().isEmpty())
            BullsAndCows->setObjectName("BullsAndCows");
        BullsAndCows->resize(450, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BullsAndCows->sizePolicy().hasHeightForWidth());
        BullsAndCows->setSizePolicy(sizePolicy);
        BullsAndCows->setMinimumSize(QSize(450, 400));
        BullsAndCows->setMaximumSize(QSize(450, 16777215));
        BullsAndCows->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(154, 175, 207);\n"
"}"));
        centralwidget = new QWidget(BullsAndCows);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        m_pB_records = new QPushButton(centralwidget);
        m_pB_records->setObjectName("m_pB_records");
        m_pB_records->setMinimumSize(QSize(100, 40));
        QFont font;
        font.setBold(true);
        m_pB_records->setFont(font);
        m_pB_records->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(m_pB_records, 0, 2, 1, 1);

        m_label_top = new QLabel(centralwidget);
        m_label_top->setObjectName("m_label_top");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        m_label_top->setFont(font1);
        m_label_top->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 11pt \"Segoe UI\";\n"
" //background-color: rgba(255, 255, 255, 0.3);\n"
" //border: 2px solid rgba(255, 255, 255, 0.3);\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));
        m_label_top->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_label_top, 0, 1, 1, 1);

        m_pB_Attempt = new QPushButton(centralwidget);
        m_pB_Attempt->setObjectName("m_pB_Attempt");
        m_pB_Attempt->setMinimumSize(QSize(100, 40));
        m_pB_Attempt->setFont(font);
        m_pB_Attempt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(m_pB_Attempt, 2, 2, 1, 1);

        m_pB_NewGame = new QPushButton(centralwidget);
        m_pB_NewGame->setObjectName("m_pB_NewGame");
        m_pB_NewGame->setMinimumSize(QSize(100, 40));
        m_pB_NewGame->setFont(font);
        m_pB_NewGame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(m_pB_NewGame, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 11pt \"Segoe UI\";\n"
" //background-color: rgba(255, 255, 255, 0.3);\n"
" //border: 2px solid rgba(255, 255, 255, 0.3);\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        m_lineEdit = new QLineEdit(centralwidget);
        m_lineEdit->setObjectName("m_lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_lineEdit->sizePolicy().hasHeightForWidth());
        m_lineEdit->setSizePolicy(sizePolicy1);
        m_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
" background-color: #FFFFFF;\n"
" border: 2px solid #696969;\n"
" border-radius: 7px;\n"
" padding: 5px;\n"
"}"));
        m_lineEdit->setMaxLength(4);
        m_lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_lineEdit, 2, 1, 1, 1);

        m_tableWidget = new QTableWidget(centralwidget);
        if (m_tableWidget->columnCount() < 3)
            m_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        m_tableWidget->setObjectName("m_tableWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_tableWidget->sizePolicy().hasHeightForWidth());
        m_tableWidget->setSizePolicy(sizePolicy2);
        m_tableWidget->setMinimumSize(QSize(0, 0));
        m_tableWidget->setLayoutDirection(Qt::LeftToRight);
        m_tableWidget->setAutoFillBackground(false);
        m_tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: #FFFFFF;\n"
"    padding: 4px;\n"
"    font-size: 10pt;\n"
"    border-style: none;\n"
"    border-bottom: 1px solid rgb(0, 0, 0);\n"
"    border-right: 1px solid rgb(0, 0, 0);\n"
"}\n"
"\n"
"QHeaderView::section:horizontal\n"
"{\n"
"    border-top: 1px solid rgb(0, 0, 0);\n"
"}\n"
"\n"
"QHeaderView::section:vertical\n"
"{\n"
"    border-left: 1px solid rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid rgb(0, 0, 0);\n"
"}"));
        m_tableWidget->setFrameShape(QFrame::StyledPanel);
        m_tableWidget->setFrameShadow(QFrame::Sunken);
        m_tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        m_tableWidget->setShowGrid(true);
        m_tableWidget->setGridStyle(Qt::SolidLine);
        m_tableWidget->setSortingEnabled(false);
        m_tableWidget->setWordWrap(true);
        m_tableWidget->setCornerButtonEnabled(true);
        m_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        m_tableWidget->horizontalHeader()->setDefaultSectionSize(114);
        m_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        m_tableWidget->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(m_tableWidget, 3, 0, 1, 3);

        BullsAndCows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BullsAndCows);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 22));
        BullsAndCows->setMenuBar(menubar);
        statusbar = new QStatusBar(BullsAndCows);
        statusbar->setObjectName("statusbar");
        BullsAndCows->setStatusBar(statusbar);

        retranslateUi(BullsAndCows);

        QMetaObject::connectSlotsByName(BullsAndCows);
    } // setupUi

    void retranslateUi(QMainWindow *BullsAndCows)
    {
        BullsAndCows->setWindowTitle(QCoreApplication::translate("BullsAndCows", "BullsAndCows", nullptr));
        m_pB_records->setText(QCoreApplication::translate("BullsAndCows", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        m_label_top->setText(QCoreApplication::translate("BullsAndCows", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        m_pB_Attempt->setText(QCoreApplication::translate("BullsAndCows", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        m_pB_NewGame->setText(QCoreApplication::translate("BullsAndCows", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("BullsAndCows", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = m_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BullsAndCows", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = m_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BullsAndCows", "\320\221\321\213\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = m_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BullsAndCows", "\320\232\320\276\321\200\320\276\320\262\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BullsAndCows: public Ui_BullsAndCows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BULLSANDCOWS_H
