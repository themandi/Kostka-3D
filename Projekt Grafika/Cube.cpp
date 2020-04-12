#include "Cube.h"

Cube::Cube()
    : size(100.0f)
{

}

void Cube::reset()
{
    pf[0] = QVector4D(0.0f, 0.0f, 0.0f, 1.0f);
    pf[1] = QVector4D(size, 0.0f, 0.0f, 1.0f);
    pf[2] = QVector4D(size, size, 0.0f, 1.0f);
    pf[3] = QVector4D(0.0f, size, 0.0f, 1.0f);

    pb[0] = QVector4D(0.0f, 0.0f, size, 1.0f);
    pb[1] = QVector4D(size, 0.0f, size, 1.0f);
    pb[2] = QVector4D(size, size, size, 1.0f);
    pb[3] = QVector4D(0.0f, size, size, 1.0f);
}
