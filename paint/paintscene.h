#ifndef PAINTSCENE_H
#define PAINTSCENE_H
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>

class Paintscene : public QGraphicsScene
{
    Q_OBJECT

public:
    explicit Paintscene(QObject *parent = 0);

    ~Paintscene();

    void changeColour(QString colour);

private:
    QPointF previousPoint;
    QString colour;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};
#endif
