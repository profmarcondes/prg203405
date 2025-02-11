#include "BlockItem.h"

BlockItem::BlockItem(const QVector<QPoint> &blocks) {
    int x_anchor = -(bsize/2);
    int y_anchor = -(bsize/2);

    _blocks.push_back(QRect(x_anchor,y_anchor,bsize,bsize));

    for(auto point: blocks){
        int x = x_anchor + point.x()*bsize;
        int y = y_anchor + point.y()*bsize;
        _blocks.push_back(QRect(x,y,bsize,bsize));
    }
}

QRectF BlockItem::boundingRect() const
{

}

QPainterPath BlockItem::shape() const
{

}

void BlockItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}
