
#include "ellipseitem.h"

EllipseItem::EllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent)
    : QGraphicsEllipseItem(x, y, w, h, parent)
{
    this->setFlags(ItemIsSelectable | ItemIsMovable | ItemIsFocusable);
//    this->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    this->setAcceptHoverEvents(true);
    this->setRect(x,y,w,h);

}

QRectF EllipseItem::boundingRect() const
{
    return QRectF(0, 0, rect().width(), rect().height());
}

void EllipseItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::blue);
    painter->drawEllipse(rect());
}

void EllipseItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    setFocus();
    QGraphicsEllipseItem::mousePressEvent(event);
}

void EllipseItem::hoverMoveEvent(QGraphicsSceneHoverEvent *event)
{
    //setCursor(Qt::OpenHandCursor);
    QGraphicsEllipseItem::hoverMoveEvent(event);
}

void EllipseItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    //setCursor(Qt::ArrowCursor);
    QGraphicsEllipseItem::hoverLeaveEvent(event);
}
