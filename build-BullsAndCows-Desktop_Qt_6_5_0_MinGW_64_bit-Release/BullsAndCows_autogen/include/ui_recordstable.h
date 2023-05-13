/********************************************************************************
** Form generated from reading UI file 'recordstable.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDSTABLE_H
#define UI_RECORDSTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordsTable
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *m_tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecordsTable)
    {
        if (RecordsTable->objectName().isEmpty())
            RecordsTable->setObjectName("RecordsTable");
        RecordsTable->resize(389, 500);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RecordsTable->sizePolicy().hasHeightForWidth());
        RecordsTable->setSizePolicy(sizePolicy);
        RecordsTable->setMinimumSize(QSize(350, 500));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        RecordsTable->setFont(font);
        RecordsTable->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(154, 175, 207);\n"
"}"));
        centralwidget = new QWidget(RecordsTable);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        m_tableWidget = new QTableWidget(centralwidget);
        if (m_tableWidget->columnCount() < 3)
            m_tableWidget->setColumnCount(3);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        m_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        m_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        m_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        m_tableWidget->setObjectName("m_tableWidget");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        m_tableWidget->setFont(font2);
        m_tableWidget->setLayoutDirection(Qt::LeftToRight);
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
        m_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        m_tableWidget->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(m_tableWidget, 0, 0, 1, 1);

        RecordsTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RecordsTable);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 389, 22));
        RecordsTable->setMenuBar(menubar);
        statusbar = new QStatusBar(RecordsTable);
        statusbar->setObjectName("statusbar");
        RecordsTable->setStatusBar(statusbar);

        retranslateUi(RecordsTable);

        QMetaObject::connectSlotsByName(RecordsTable);
    } // setupUi

    void retranslateUi(QMainWindow *RecordsTable)
    {
        RecordsTable->setWindowTitle(QCoreApplication::translate("RecordsTable", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = m_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RecordsTable", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = m_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RecordsTable", "\320\241\321\213\320\263\321\200\320\260\320\275\320\275\320\276 \320\270\320\263\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = m_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RecordsTable", "\320\240\320\265\320\272\320\276\321\200\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordsTable: public Ui_RecordsTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDSTABLE_H
