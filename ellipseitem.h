
#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QGraphicsEllipseItem>
#include <QGraphicsSceneHoverEvent>
#include <QPainter>

class EllipseItem : public QGraphicsEllipseItem
{
public:
    EllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent = nullptr);

private:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
};

#endif // ELLIPSEITEM_H
