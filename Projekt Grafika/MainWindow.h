#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector3D>
#include "Canvas.h"
#include "Cube.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent*);
    void draw();
    bool isHideWallsModeOn() const;
    bool isTextureModeOn() const;

    QImage* getTexture() const
    {
        return texture;
    }

    float getD() const
    {
        return d;
    }

private slots:
    void on_przesuniecieX_valueChanged(int);
    void on_przesuniecieY_valueChanged(int);
    void on_przesuniecieZ_valueChanged(int);
    void on_skalowanieX_valueChanged(int);
    void on_skalowanieY_valueChanged(int);
    void on_skalowanieZ_valueChanged(int);
    void on_rotacjaX_valueChanged(int);
    void on_rotacjaY_valueChanged(int);
    void on_rotacjaZ_valueChanged(int);
    void on_pochylenieX_valueChanged(int);
    void on_pochylenieY_valueChanged(int);
    void on_pochylenieZ_valueChanged(int);
    void on_sldD_valueChanged(int);
    void on_ukryjSciany_toggled(bool);
    void on_teksturowanie_toggled(bool);
    void on_reset_clicked();
    void on_quit_clicked();

    void on_ukryjSciany_clicked();

private:
    Ui::MainWindow* ui;
    Canvas* canvas;
    QImage* texture;

    QVector3D pos;
    QVector3D scale;
    QVector3D rotation;
    QVector3D shearing;
    float d;

    Cube cube;
};

#endif // MAINWINDOW_H
