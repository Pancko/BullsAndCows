
#ifndef BULLSANDCOWS_H
#define BULLSANDCOWS_H

#include <QMainWindow>
#include <QRandomGenerator>
#include "congratulationswindow.h"
#include "recordstable.h"


QT_BEGIN_NAMESPACE
namespace Ui { class BullsAndCows; }
QT_END_NAMESPACE

class BullsAndCows : public QMainWindow

{
    Q_OBJECT

public:
    BullsAndCows(QWidget *parent = nullptr);
    ~BullsAndCows();

private slots:

    void on_m_pB_NewGame_clicked();

    void on_m_pB_Attempt_clicked();


    void on_m_pB_records_clicked();

private:
    Ui::BullsAndCows *ui;

    CongratulationsWindow *CongWin;

    RecordsTable *RecordsWin;
};

#endif // BULLSANDCOWS_H
