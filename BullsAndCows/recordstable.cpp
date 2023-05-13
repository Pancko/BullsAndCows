#include "recordstable.h"
#include "ui_recordstable.h"

RecordsTable::RecordsTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RecordsTable)
{
    ui->setupUi(this);

    setWindowTitle("Пантеон");

    ui->m_tableWidget->horizontalHeader()->setSectionResizeMode (QHeaderView::Stretch);
}

RecordsTable::~RecordsTable()
{
    delete ui;
}

void RecordsTable::Update()
{
    ui->m_tableWidget->setRowCount(0);

    QFile recordsFile("Records.txt");
    recordsFile.open(QFile::OpenModeFlag::ReadOnly);

    if(!(recordsFile.size() == 0))
    {
        while(!recordsFile.atEnd())
        {
            ui->m_tableWidget->insertRow(ui->m_tableWidget->rowCount());
            QString line = recordsFile.readLine();
            line.replace('\n', ' ');

            int TimesPlayedIndex = line.indexOf(" ");

            if(TimesPlayedIndex != -1)
            {
                while(!line[TimesPlayedIndex + 1].isNumber())
                {
                    TimesPlayedIndex = line.indexOf(" ", TimesPlayedIndex + 1);
                }
            }


            ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 0 ,
                                       new QTableWidgetItem(line.first(TimesPlayedIndex)));

            ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 1 ,
                                       new QTableWidgetItem(line.mid(TimesPlayedIndex,
                                                                     line.lastIndexOf(" ", line.size() - 2) - TimesPlayedIndex)));

            ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 2 ,
                                       new QTableWidgetItem(line.last(line.size() - line.lastIndexOf(" ", line.size() - 2))));
        }
    }
}
