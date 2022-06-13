#include "buy.h"
#include "ui_buy.h"
#include <QtWebEngineWidgets/QWebEngineView>
#include <QPainter>

#include "information.h"
extern QString A;
extern QString B;
extern QString C;
extern QString D;
extern QString E;
GetApStTo::GetApStTo(QString app,QString sto,QString t):Information(A,B),Ap(app),St(sto),To(t)
{

}
GetApStTo::~GetApStTo()
{

}

void Information::writeYourAc(QTextStream &stream)
{
    stream<<account_infor<<":"<<password_infor<<":";
}

void GetApStTo::getOther(QTextStream &stream)
{
    writeYourAc(stream);
    stream<<Ap<<":"<<St<<":"<<To<<"\n";
}

Buy::Buy(QWidget *parent)
    : QWidget{parent}
    ,ui(new Ui::Buy)
{
    ui->setupUi(this);
    ui->iphone13_Black->hide();
    ui->iphone13_Green->hide();
    ui->iphone13_White->hide();
    ui->iphone13_Gold->hide();
    ui->iphone13_Blue->hide();

    ui->iPhone13_128->hide();
    ui->iPhone13_256->hide();
    ui->iPhone13_512->hide();
    ui->iPhone13_1TB->hide();
    ui->storage->hide();

    ui->production_appearance->hide();
    ui->production_storage->hide();
    ui->thisIsYourNewIphone->hide();

    ui->money->hide();
    ui->RMB->hide();
    ui->quantity->hide();
    ui->quantity_label->hide();
    ui->quantity->setMinimum(1);
    ui->quantity->setMaximum(2);
     ui->pushButton->hide();
}
Buy::~Buy()
{
    delete ui;
}
void Buy::goTo_buy_in()
{
    this->show();
}
void Buy::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(QPointF(0, 100), QPointF(2000, 100));
}
int money_num;
QString app1;
QString sto1;
int total1;
int quantity;
int money_or;
void Buy::on_green_clicked()
{
    ui->iphone13_famliy->hide();
    ui->iphone13_Black->hide();
    ui->iphone13_Green->show();
    ui->iphone13_White->hide();
    ui->iphone13_Gold->hide();
    ui->iphone13_Blue->hide();
    ui->green->setStyleSheet("color:black");
    ui->blue->setStyleSheet("color:grey");
    ui->white->setStyleSheet("color:grey");
    ui->gold->setStyleSheet("color:grey");
    ui->black->setStyleSheet("color:grey");

    ui->iPhone13_128->show();
    ui->iPhone13_256->show();
    ui->iPhone13_512->show();
    ui->iPhone13_1TB->show();
    ui->storage->show();

    ui->thisIsYourNewIphone->show();
    QString appearance="苍岭绿色";
    ui->production_appearance->setText(appearance);
    ui->production_appearance->show();
    app1=appearance;
}
void Buy::on_blue_clicked()
{
    ui->iphone13_famliy->hide();
    ui->iphone13_Black->hide();
    ui->iphone13_Green->hide();
    ui->iphone13_White->hide();
    ui->iphone13_Gold->hide();
    ui->iphone13_Blue->show();
    ui->blue->setStyleSheet("color:black");
    ui->green->setStyleSheet("color:grey");
    ui->white->setStyleSheet("color:grey");
    ui->gold->setStyleSheet("color:grey");
    ui->black->setStyleSheet("color:grey");

    ui->iPhone13_128->show();
    ui->iPhone13_256->show();
    ui->iPhone13_512->show();
    ui->iPhone13_1TB->show();
    ui->storage->show();

    ui->thisIsYourNewIphone->show();
    QString appearance="远峰蓝色";
    ui->production_appearance->setText(appearance);
    ui->production_appearance->show();
    app1=appearance;
}
void Buy::on_white_clicked()
{
    ui->iphone13_famliy->hide();
    ui->iphone13_Black->hide();
    ui->iphone13_Green->hide();
    ui->iphone13_White->show();
    ui->iphone13_Gold->hide();
    ui->iphone13_Blue->hide();
    ui->white->setStyleSheet("color:black");
    ui->blue->setStyleSheet("color:grey");
    ui->green->setStyleSheet("color:grey");
    ui->gold->setStyleSheet("color:grey");
    ui->black->setStyleSheet("color:grey");

    ui->iPhone13_128->show();
    ui->iPhone13_256->show();
    ui->iPhone13_512->show();
    ui->iPhone13_1TB->show();
    ui->storage->show();

    ui->thisIsYourNewIphone->show();
    QString appearance="银色";
    ui->production_appearance->setText(appearance);
    ui->production_appearance->show();
    app1=appearance;
}
void Buy::on_gold_clicked()
{
    ui->iphone13_famliy->hide();
    ui->iphone13_Black->hide();
    ui->iphone13_Green->hide();
    ui->iphone13_White->hide();
    ui->iphone13_Gold->show();
    ui->iphone13_Blue->hide();
    ui->green->setStyleSheet("color:grey");
    ui->blue->setStyleSheet("color:grey");
    ui->white->setStyleSheet("color:grey");
    ui->gold->setStyleSheet("color:black");
    ui->black->setStyleSheet("color:grey");

    ui->iPhone13_128->show();
    ui->iPhone13_256->show();
    ui->iPhone13_512->show();
    ui->iPhone13_1TB->show();
    ui->storage->show();

    ui->thisIsYourNewIphone->show();
    QString appearance="金色";
    ui->production_appearance->setText(appearance);
    ui->production_appearance->show();
    app1=appearance;
}
void Buy::on_black_clicked()
{
    ui->iphone13_famliy->hide();
    ui->iphone13_Black->show();
    ui->iphone13_Green->hide();
    ui->iphone13_White->hide();
    ui->iphone13_Gold->hide();
    ui->iphone13_Blue->hide();
    ui->green->setStyleSheet("color:grey");
    ui->blue->setStyleSheet("color:grey");
    ui->white->setStyleSheet("color:grey");
    ui->gold->setStyleSheet("color:grey");
    ui->black->setStyleSheet("color:black");

    ui->iPhone13_128->show();
    ui->iPhone13_256->show();
    ui->iPhone13_512->show();
    ui->iPhone13_1TB->show();
    ui->storage->show();

    ui->thisIsYourNewIphone->show();
    QString appearance="石墨色";
    ui->production_appearance->setText(appearance);
    ui->production_appearance->show();
    app1=appearance;
}
void Buy::on_iPhone13_128_clicked()
{
    ui->iPhone13_128->setStyleSheet("color:black");
    ui->iPhone13_256->setStyleSheet("color:grey");
    ui->iPhone13_512->setStyleSheet("color:grey");
    ui->iPhone13_1TB->setStyleSheet("color:grey");
     ui->pushButton->show();
    QString storage="128GB";
    ui->production_storage->setText(storage);
    ui->production_storage->show();

    QString money="7999";

    quantity = ui->quantity->value();
    money_num = money.toInt();
    money_or = money_num;

    ui->money->setNum(money_or*quantity);

    QFont ft;
    ft.setPointSize(36);
    ui->money->setFont(ft);

    ui->money->show();
    ui->RMB->show();
    ui->quantity->show();
    ui->quantity_label->show();

    sto1=storage;

}
void Buy::on_iPhone13_256_clicked()
{
    ui->iPhone13_256->setStyleSheet("color:black");
    ui->iPhone13_512->setStyleSheet("color:grey");
    ui->iPhone13_128->setStyleSheet("color:grey");
    ui->iPhone13_1TB->setStyleSheet("color:grey");
     ui->pushButton->show();
    QString storage="256GB";
    ui->production_storage->setText(storage);
    ui->production_storage->show();

    QString money="8799";
    quantity = ui->quantity->value();
    money_num = money.toInt();
    money_or = money_num;

    ui->money->setNum(money_or*quantity);

    QFont ft;
    ft.setPointSize(36);
    ui->money->setFont(ft);

    ui->money->show();
    ui->RMB->show();
    ui->quantity->show();
    ui->quantity_label->show();

    sto1=storage;

}
void Buy::on_iPhone13_512_clicked()
{
    ui->iPhone13_512->setStyleSheet("color:black");
    ui->iPhone13_256->setStyleSheet("color:grey");
    ui->iPhone13_128->setStyleSheet("color:grey");
    ui->iPhone13_1TB->setStyleSheet("color:grey");
     ui->pushButton->show();
    QString storage="512GB";
    ui->production_storage->setText(storage);
    ui->production_storage->show();

    QString money="10399";
    quantity = ui->quantity->value();
    money_num = money.toInt();
    money_or = money_num;

    ui->money->setNum(money_or*quantity);

    QFont ft;
    ft.setPointSize(36);
    ui->money->setFont(ft);

    ui->money->show();
    ui->RMB->show();
    ui->quantity->show();
    ui->quantity_label->show();

    sto1=storage;

}
void Buy::on_iPhone13_1TB_clicked()
{
    ui->iPhone13_1TB->setStyleSheet("color:black");
    ui->iPhone13_512->setStyleSheet("color:grey");
    ui->iPhone13_256->setStyleSheet("color:grey");
    ui->iPhone13_128->setStyleSheet("color:grey");
    ui->pushButton->show();
    QString storage="1TB";
    ui->production_storage->setText(storage);
    ui->production_storage->show();


    QString money="11999";
    quantity = ui->quantity->value();
    money_num = money.toInt();
    money_or = money_num;

    ui->money->setNum(money_or*quantity);

    QFont ft;
    ft.setPointSize(36);
    ui->money->setFont(ft);

    ui->money->show();
    ui->RMB->show();
    ui->quantity->show();
    ui->quantity_label->show();

    sto1=storage;

}

void Buy::on_quantity_valueChanged(int arg1)
{
    quantity = ui->quantity->value();
    money_or = money_num;
    ui->money->setNum(money_or*quantity);
}
void Buy::on_pushButton_clicked()
{
    int j=0;

    QFile information_total("/Users/liushanyu/Applestore/information_total1.txt");
    QString strline;
    QStringList strList;
    information_total.open(QIODevice::ReadOnly|QIODevice::Text);
    while(!information_total.atEnd())
    {
        strline = information_total.readLine();
        strList = strline.split(":");
         if(A==strList.at(0))
         {

                j++;
         }
    }

    if((j+quantity)<=2)
    {
        int virtualMoney;
        int m=0;
        QStringList add;
        QStringList num;
        QStringList mon;
        QString strline_personal;
        QStringList strList_personal;
        QFile information_personal("/Users/liushanyu/Applestore/information_personal.txt");
        information_personal.open(QIODevice::ReadOnly|QIODevice::Text);
        while(!information_personal.atEnd())
        {
            strline_personal = information_personal.readLine();
            strList_personal = strline_personal.split(":");
             if(A==strList_personal.at(0))
             {
                    num<<strList_personal.at(1);
                    add<<strList_personal.at(2);
                    mon<<strList_personal.at(3);
                    m++;
             }
        }
        virtualMoney=mon.at(m-1).toInt();
        if(virtualMoney>=money_or*quantity)
        {
            quantity = ui->quantity->value();
            money_or = money_num;
            ui->money->setNum(money_or*quantity);
            QFile information_total("/Users/liushanyu/Applestore/information_total1.txt");
            for(int i=1;i<=quantity;i++)
            {
                total1=money_or;
                QString total2 = QString::number(total1, 10);


                GetApStTo ApStTo(app1,sto1,total2);

                information_total.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
                QTextStream stream_total(&information_total);
                ApStTo.getOther(stream_total);
                information_total.close();



                QFile information_personal("/Users/liushanyu/Applestore/information_personal.txt");
                information_personal.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
                QTextStream stream_personal(&information_personal);

                QString total3 = QString::number(virtualMoney-money_or*quantity, 10);
                stream_personal<<A<<":"<<num.at(m-1)<<":"<<add.at(m-1)<<":"<<total3<<":"<<"\n";
                information_personal.close();
            }
            QMessageBox::information(this," ","购买成功，您可以在“我的订单”->“所有订单”中查看");
            this->hide();
            emit goTo_myorder();
        }
        else
        {
            QMessageBox::warning(this, " ", tr("您余额不足，请在“个人设置”中添加更多余额后购买"));
        }
    }
    else
    {
        QMessageBox::warning(this, " ", tr("您的购买数量已经超过上限"));

    }


}


void Buy::on_pushButton_2_clicked()
{
    this->hide();
    emit goBack();
}

