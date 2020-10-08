#ifndef PAINT_H
#define PAINT_H
#include <QWidget>
#include <QTimer>
#include <QResizeEvent>
#include <QMainWindow>
#include <QGraphicsSceneMouseEvent>
#include <QFileDialog>
#include <paintscene.h>

namespace Ui {
class Paint;
}

class Paint : public QWidget
{
    Q_OBJECT

public:
    explicit Paint(QWidget *parent = 0);
    ~Paint();

private:
    Ui::Paint *ui;
    QTimer *timer;
    Paintscene *scene;
    QString str_open = "";

private:
    void resizeEvent(QResizeEvent * event);

    void save();

    void open();

    void back_to_bord();

private slots:
    
    void slotTimer();

    void green();

    void red();

    void blue();

    void yellow();

    void black();
};
#endif
