#ifndef RECORDSTABLE_H
#define RECORDSTABLE_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class RecordsTable;
}

class RecordsTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecordsTable(QWidget *parent = nullptr);
    ~RecordsTable();

public:

    void Update();

private:
    Ui::RecordsTable *ui;
};

#endif // RECORDSTABLE_H
