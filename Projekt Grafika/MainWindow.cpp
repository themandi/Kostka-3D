#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui -> setupUi(this);

    canvas = new Canvas(this,
                        ui -> frame -> x(),
                        ui -> frame -> y(),
                        ui -> frame -> width(),
                        ui -> frame -> height());

    texture = new QImage(":/Texture1.jpg");
    on_reset_clicked();
}

MainWindow::~MainWindow()
{
    delete texture;
    delete canvas;
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*)
{
    canvas -> draw();
}

void MainWindow::draw()
{
    canvas -> reset();
    canvas -> drawCube(&cube, pos, scale, rotation, shearing);
    update();
}

bool MainWindow::isHideWallsModeOn() const
{
    return ui -> ukryjSciany -> isChecked();
}

bool MainWindow::isTextureModeOn() const
{
    return ui -> teksturowanie -> isChecked();
}

void MainWindow::on_przesuniecieX_valueChanged(int value)
{
    pos.setX(value);
    draw();
}

void MainWindow::on_przesuniecieY_valueChanged(int value)
{
    pos.setY(value);
    draw();
}

void MainWindow::on_przesuniecieZ_valueChanged(int value)
{
    pos.setZ(value);
    draw();
}

void MainWindow::on_skalowanieX_valueChanged(int value)
{
    scale.setX(value / 1000.0f);
    draw();
}

void MainWindow::on_skalowanieY_valueChanged(int value)
{
    scale.setY(value / 1000.0f);
    draw();
}

void MainWindow::on_skalowanieZ_valueChanged(int value)
{
    scale.setZ(value / 1000.0f);
    draw();
}

void MainWindow::on_rotacjaX_valueChanged(int value)
{
    rotation.setX(value / 180.0f * M_PI);
    rotation.setX(static_cast<int>(rotation.x() * 100.0f));
    rotation.setX(rotation.x() / 100.0f);
    draw();
}

void MainWindow::on_rotacjaY_valueChanged(int value)
{
    rotation.setY(value / 180.0f * M_PI);
    rotation.setY(static_cast<int>(rotation.y() * 100.0f));
    rotation.setY(rotation.y() / 100.0f);
    draw();
}

void MainWindow::on_rotacjaZ_valueChanged(int value)
{
    rotation.setZ(value / 180.0f * M_PI);
    rotation.setZ(static_cast<int>(rotation.z() * 100.0f));
    rotation.setZ(rotation.z() / 100.0f);
    draw();
}

void MainWindow::on_pochylenieX_valueChanged(int value)
{
    shearing.setX(static_cast<int>(value / 100.0f) / 10.0f);
    draw();
}

void MainWindow::on_pochylenieY_valueChanged(int value)
{
    shearing.setY(static_cast<int>(value / 100.0f) / 10.0f);
    draw();
}

void MainWindow::on_pochylenieZ_valueChanged(int value)
{
    shearing.setZ(static_cast<int>(value / 100.0f) / 10.0f);
    draw();
}

void MainWindow::on_sldD_valueChanged(int value)
{
    d = value;
    draw();
}

void MainWindow::on_ukryjSciany_toggled(bool checked)
{
    ui -> teksturowanie -> setEnabled(checked);
    draw();
}

void MainWindow::on_teksturowanie_toggled(bool checked)
{
    draw();
}

void MainWindow::on_reset_clicked()
{
    pos.setX(canvas -> getWidth() / 2.0f - cube.getSize() / 2.0f);
    pos.setY(canvas -> getHeight() / 2.0f - cube.getSize() / 2.0f);
    pos.setZ(10.0f);

    scale.setX(1.0f);
    scale.setY(1.0f);
    scale.setZ(1.0f);

    rotation.setX(0.0f);
    rotation.setY(0.0f);
    rotation.setZ(0.0f);

    shearing.setX(0.0f);
    shearing.setY(0.0f);
    shearing.setZ(0.0f);

    d = 1000.0f;

    ui -> sldD -> setValue(d);

    cube.reset();

    ui -> przesuniecieX -> setValue(pos.x());
    ui -> przesuniecieY -> setValue(pos.y());
    ui -> przesuniecieZ -> setValue(pos.z());

    ui -> skalowanieX -> setValue(scale.x() * 1000.0f);
    ui -> skalowanieY -> setValue(scale.y() * 1000.0f);
    ui -> skalowanieZ -> setValue(scale.z() * 1000.0f);

    ui -> rotacjaX -> setValue(rotation.x());
    ui -> rotacjaY -> setValue(rotation.y());
    ui -> rotacjaZ -> setValue(rotation.z());

    ui -> pochylenieX -> setValue(shearing.x());
    ui -> pochylenieY -> setValue(shearing.y());
    ui -> pochylenieZ -> setValue(shearing.z());

    ui -> ukryjSciany -> setChecked(false);
    ui -> teksturowanie -> setChecked(false);
}

void MainWindow::on_quit_clicked()
{
    qApp -> quit();
}
