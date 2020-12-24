#ifndef FINDLOCATIONMATCHES_H
#define FINDLOCATIONMATCHES_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class findLocationMatches;
}
QT_END_NAMESPACE

class findLocationMatches : public QWidget
{
    Q_OBJECT

public:
    findLocationMatches(QWidget *parent = nullptr);
    ~findLocationMatches();

private slots:
    void on_findMatches_clicked();

    void on_logout_clicked();

private:
    Ui::findLocationMatches *ui;
};

#endif // FINDLOCATIONMATCHES_H

