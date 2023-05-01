
#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QGraphicsEllipseItem>

class EllipsItem : public QGraphicsEllipseItem
{
public:
    EllipsItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent = nullptr);
};

#endif // ELLIPSEITEM_H
