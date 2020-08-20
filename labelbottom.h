#ifndef LABELBOTTOM_H
#define LABELBOTTOM_H

#include <QObject>
#include <QWidget>
#include <QLabel>

class LabelBottom : public QLabel
{
    Q_OBJECT
public:
    explicit LabelBottom(QWidget *parent = nullptr);
    explicit LabelBottom(QWidget *parent,QPixmap px);

signals:
    void clicked();

public slots:

protected:
    void mousePressEvent(QMouseEvent *ev);
    //void mover();
    //void mouseReleaseEvent(QMouseEvent *ev);
    //void enterEvent(QEvent *);
    //void leaveEvent(QEvent *);

private:
    QPixmap pixmap;
};


#endif // LABELBOTTOM_H
