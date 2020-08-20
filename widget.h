#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_coin5_clicked();

    void on_coin20_clicked();

    void on_coin50_clicked();

    void on_coin100_clicked();

    void on_coin500_clicked();

    void on_deal_clicked();

    void on_hit_clicked();

    void on_stand_clicked();

    void on_doubleX2_clicked();

    void dealer();

    void end();

    void nextGame();

    void coinClick(int n);

    void on_split_clicked();

    void splitStep();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
