
#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_scene = new QGraphicsScene;
    m_scene->setSceneRect(0,0,780,580);

    ui->graphicsView->setScene(m_scene);

    QPointF pos(m_scene->sceneRect().center());
    EllipseItem *ellipse = new EllipseItem(pos.x(), pos.y(), 50, 50);
    m_scene->addItem(ellipse);
}

Widget::~Widget()
{
    delete ui;
}
