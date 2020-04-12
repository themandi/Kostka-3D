#include "Triangle.h"
#include <QColor>

Triangle::Triangle()
{

}

Triangle::Triangle(QVector2D v1, QVector2D v2, QVector2D v3)
{
    vertices[0] = v1;
    vertices[1] = v2;
    vertices[2] = v3;
}
