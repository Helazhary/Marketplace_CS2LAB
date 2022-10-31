#include "buy_sell.h"
#include "ui_buy_sell.h"

BUY_SELL::BUY_SELL(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BUY_SELL)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/Salma Youssef/Downloads/local-market-place-with-vegetables-and-fruits-vector-26872866.jpg");
ui->labelpic->setPixmap(pix);

}

BUY_SELL::~BUY_SELL()
{
    delete ui;
}

