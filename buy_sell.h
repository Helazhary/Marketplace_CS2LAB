#ifndef BUY_SELL_H
#define BUY_SELL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BUY_SELL; }
QT_END_NAMESPACE

class BUY_SELL : public QMainWindow
{
    Q_OBJECT

public:
    BUY_SELL(QWidget *parent = nullptr);
    ~BUY_SELL();

private:
    Ui::BUY_SELL *ui;
};
#endif // BUY_SELL_H
