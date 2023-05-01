
#include "ellipseitem.h"

EllipseItem::EllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem *parent)
    : QGraphicsEllipseItem(x, y, w, h, parent)
{
    setBrush(QBrush(QColor(Qt::white)));
    setPen(QPen(QColor(Qt::black)));
}

void EllipseItem::updateSize(double rms)
{
    // Устанавливаем новый размер эллипса на основе значения rms
    qreal size = 100.0 + rms * 100.0;
    setRect(-size / 2.0, -size / 2.0, size, size);

    // Устанавливаем новую прозрачность на основе значения rms
    qreal opacity = 0.2 + rms * 0.8;
    setOpacity(opacity);

    // Обновляем элемент
    update();
}

void EllipseItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF pos = event->scenePos();

    // Изменяем позицию элемента в соответствии с координатами мыши
    setPos(pos.x() - rect().width() / 2, pos.y() - rect().height() / 2);

    // Вызываем родительский метод для дальнейшей обработки события
    QGraphicsEllipseItem::mouseMoveEvent(event);
}

