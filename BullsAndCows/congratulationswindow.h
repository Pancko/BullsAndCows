#ifndef CONGRATULATIONSWINDOW_H
#define CONGRATULATIONSWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "recordstable.h"

namespace Ui {
class CongratulationsWindow;
}

class CongratulationsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CongratulationsWindow(QWidget *parent = nullptr);
    ~CongratulationsWindow();

private:
    Ui::CongratulationsWindow *ui;

public:
    void ShowScore(int Attempts);
private slots:
    void on_m_pB_Decline_clicked();
    void on_m_pB_EnterName_clicked();
};

#endif // CONGRATULATIONSWINDOW_H
