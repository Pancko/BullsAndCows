
#include "bullsandcows.h"
#include "./ui_bullsandcows.h"

#include "congratulationswindow.h"
#include "recordstable.h"

int CorrectNumber[4];



BullsAndCows::BullsAndCows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BullsAndCows)
{
    ui->setupUi(this);
    setWindowTitle("Быки и польские коровы");

    connect(ui->m_lineEdit, SIGNAL(returnPressed()), this, SLOT(on_m_pB_Attempt_clicked()));

    //Установка ограничения на LineEdit
    //QRegularExpression re("[0-9]\\d{3}");
    QRegularExpression re("^([0-9])(?!\\1)([0-9])(?!\\1|\\2)([0-9])(?!\\1|\\2|\\3)([0-9])$");
    QValidator* validator = new QRegularExpressionValidator (re, this);
    ui->m_lineEdit->setValidator(validator);
    //--------------------------------

    ui->m_tableWidget->horizontalHeader()->setSectionResizeMode (QHeaderView::Stretch);
    ui->m_tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    CongWin = new CongratulationsWindow();
    RecordsWin = new RecordsTable();
}

BullsAndCows::~BullsAndCows()
{
    delete ui;
}

void BullsAndCows::on_m_pB_NewGame_clicked()
{

    ui->m_label_top->setText("Игра началась!");

    int randomizedDigit;
    CorrectNumber[0] = 0 + rand() % 9;


    for (int i = 1; i < 4; i++)
    {
        randomizedDigit = 0 + rand() % 9;
        for (int j = 0; j < i; j++)
        {
            if (CorrectNumber[j] == randomizedDigit)
            {
                while (CorrectNumber[j] == randomizedDigit)
                {
                    randomizedDigit = 0 + rand() % 9;
                }

            }
        }
        CorrectNumber[i] = randomizedDigit;
    }

    int RandomedNumber = 0;
    for (int i = 0; i < 4; i++)
    {
        RandomedNumber = RandomedNumber * 10 + CorrectNumber[i];
    }

    ui->m_tableWidget->setRowCount(0);
    ui->m_pB_Attempt->setDisabled(false);
    if (CongWin)
    {
        CongWin->hide();
    }


    //DEBUG(НЕВЕРОЯТНО ПРОЗРАЧНАЯ ПОДСКАЗОЧКА):

    ui->m_tableWidget->insertRow(ui->m_tableWidget->rowCount());
    ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 0 , new QTableWidgetItem(QString::number(RandomedNumber)));

}

void BullsAndCows::on_m_pB_Attempt_clicked()
{
    if(ui->m_lineEdit->hasAcceptableInput())
    {
        int Attempt = ui->m_lineEdit->text().toInt();
        int Cows = 0;
        int Bulls = 0;

        for(int i = 0; i < 4; i++)
        {
            if ((Attempt % 10) == CorrectNumber[3 - i]) Bulls++;

            else
            {
                for (int j = 0; j < 4; j++)
                {
                    if ((Attempt % 10) == CorrectNumber[3 - j])
                    {
                        Cows++;
                        break;
                    }
                }
            }

            Attempt = Attempt / 10;
        }

        ui->m_tableWidget->insertRow(ui->m_tableWidget->rowCount());
        ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 0 , new QTableWidgetItem(ui->m_lineEdit->text()));
        ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 1 , new QTableWidgetItem(QString::number(Bulls)));
        ui->m_tableWidget->setItem(ui->m_tableWidget->rowCount() - 1, 2 , new QTableWidgetItem(QString::number(Cows)));

        if (Bulls == 4)
        {
            ui->m_pB_Attempt->setDisabled(true);
            ui->m_label_top->setText("Победа PogU");

            CongWin->show();
            CongWin->ShowScore(ui->m_tableWidget->rowCount());
        }
        else
        {
            ui->m_label_top->setText("Увы Jokerge");
        }
    }
    else
    {
        ui->m_label_top->setText("Введите 4 разные цифры");
    }
}



void BullsAndCows::on_m_pB_records_clicked()
{
    RecordsWin->Update();
    RecordsWin->show();
}

