#include "congratulationswindow.h"
#include "ui_congratulationswindow.h"

int CurrentAttempts = 0;

CongratulationsWindow::CongratulationsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CongratulationsWindow)
{
    ui->setupUi(this);
    setWindowTitle("Omedetou!");

    connect(ui->m_lineEdit, SIGNAL(returnPressed()), this, SLOT(on_m_pB_EnterName_clicked()));

    QRegularExpression re("([a-z]|[A-Z])[^ ]{2,16}");
    QValidator* validator = new QRegularExpressionValidator (re, this);
    ui->m_lineEdit->setValidator(validator);
}

CongratulationsWindow::~CongratulationsWindow()
{
    delete ui;
}

void CongratulationsWindow::ShowScore(int Attempts)
{
    ui->m_label_attempts->setText("Победа! Количество попыток: " + QString::number(Attempts));
    CurrentAttempts = Attempts;
}

void CongratulationsWindow::on_m_pB_Decline_clicked()
{
    this->hide();
}


void CongratulationsWindow::on_m_pB_EnterName_clicked()
{
    QFile recordsFile("Records.txt");
    recordsFile.open(QFile::OpenModeFlag::ReadWrite);

    int Index = 0;
    bool NameFound = false;
    bool NameInserted = false;
    bool ReplacementNeeded = false;

    QString dataText = NULL;
    QString Attempts;
    QString Replacer;

    if(recordsFile.size() == 0)
    {
        dataText += ui->m_lineEdit->text() + " 1 " + QString::number(CurrentAttempts) + "\n";
    }
    else
    {
        while(!recordsFile.atEnd())
        {
            QString line = recordsFile.readLine();
            line.replace('\n', ' ');
            line.chop(1);
            int Space = line.indexOf(" ", line.indexOf(ui->m_lineEdit->text()));

            if(Space != -1)
            {
                while(!line[Space + 1].isNumber())
                {
                    Space = line.indexOf(" ", Space + 1);
                }
            }

            if (line.size()!=0)
            {
                if(line.contains(ui->m_lineEdit->text()) && (Space == ui->m_lineEdit->text().size()))
                {
                    NameFound = true;
                    NameInserted = true;
                    Index = line.indexOf(ui->m_lineEdit->text()) + ui->m_lineEdit->text().size() + 1;
                    Space = line.indexOf(" ", Index);
                    for (int i = Index; i < Space; i++)
                    {
                        Attempts += line[i];
                    }
                    line.replace(Index, Space - Index, QString::number(Attempts.toInt() + 1));


                    int PreviousRecord  = (line.last(line.size() - line.lastIndexOf(" "))).toInt();
                    if (PreviousRecord > CurrentAttempts)
                    {
                        ReplacementNeeded = true;
                        NameInserted = false;
                        line.replace(line.lastIndexOf(" ") + 1, line.size() - line.lastIndexOf(" "), QString::number(CurrentAttempts));
                        Replacer = line + "\n";
                    }
                    else dataText += line + "\n";
                }
                else
                {
                    dataText += line + "\n";
                }
            }



        }

        if(!NameFound)
        {
            dataText.clear();
            recordsFile.seek(0);
            while(!recordsFile.atEnd())
            {
                QString line = recordsFile.readLine();
                line.replace('\n', ' ');
                line.chop(1);
                if (line.size()!=0)
                {
                    if(!NameInserted)
                    {
                        int LineRecord = (line.last(line.size() - line.lastIndexOf(" ", line.size()))).toInt();
                        if (LineRecord > CurrentAttempts)
                        {
                            NameInserted = true;
                            dataText += ui->m_lineEdit->text() + " 1 " + QString::number(CurrentAttempts) + "\n" + line + "\n";
                        }
                        else
                        {
                            dataText += line + "\n";
                        }
                    }
                    else dataText += line + "\n";
                }

            }
        }

        if(!NameInserted && !ReplacementNeeded)
        {
            dataText += ui->m_lineEdit->text() + " 1 " + QString::number(CurrentAttempts) + "\n";
        }
    }

    if (ReplacementNeeded)
    {
        dataText.clear();
        recordsFile.seek(0);
        while(!recordsFile.atEnd())
        {
            QString line = recordsFile.readLine();

            if (line.size()!=0)
            {
                line.replace('\n', ' ');
                line.chop(1);
                int Space = line.indexOf(" ", line.indexOf(ui->m_lineEdit->text()));

                if(Space != -1)
                {
                    while(!line[Space + 1].isNumber())
                    {
                        Space = line.indexOf(" ", Space + 1);
                    }
                }

                if(!(line.contains(ui->m_lineEdit->text()) && (Space == ui->m_lineEdit->text().size())))
                {
                    if(!NameInserted)
                    {
                        int LineRecord = (line.last(line.size() - line.lastIndexOf(" ", line.size()))).toInt();
                        if (LineRecord > CurrentAttempts)
                        {
                            NameInserted = true;
                            dataText += Replacer + line + "\n";
                        }
                        else
                        {
                            dataText += line + "\n";
                        }
                    }
                    else dataText += line + "\n";
                }
            }


        }
    }

    recordsFile.seek(0);
    QTextStream stream(&recordsFile);
    stream << dataText;

    recordsFile.close();

    ui->m_lineEdit->clear();

    this->hide();
}

