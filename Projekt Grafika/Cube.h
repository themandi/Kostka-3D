#ifndef CUBE_H
#define CUBE_H

#include <QVector4D>

class Cube
{
    public:
        Cube();
        void reset();

        QVector4D* getPF(int i)
        {
            return &pf[i];
        }

        QVector4D* getPB(int i)
        {
            return &pb[i];
        }

        float getSize() const
        {
            return size;
        }

    private:
        QVector4D pf[4];
        QVector4D pb[4];
        float size;
};

#endif // CUBE_H
