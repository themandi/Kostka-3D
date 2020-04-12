/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QSlider *sldD;
    QGroupBox *groupBox;
    QGroupBox *g1;
    QVBoxLayout *verticalLayout;
    QSlider *przesuniecieX;
    QSlider *przesuniecieY;
    QSlider *przesuniecieZ;
    QLabel *Skalowanie;
    QGroupBox *g2;
    QVBoxLayout *verticalLayout_3;
    QSlider *skalowanieX;
    QSlider *skalowanieY;
    QSlider *skalowanieZ;
    QGroupBox *g6;
    QLabel *lblX_8;
    QLabel *lblY_8;
    QLabel *lblZ_8;
    QGroupBox *g8;
    QLabel *lblX_9;
    QLabel *lblY_9;
    QLabel *lblZ_9;
    QGroupBox *g7;
    QLabel *lblX_12;
    QLabel *lblY_12;
    QLabel *lblZ_12;
    QLabel *Przesuniecie;
    QLabel *Rotacja;
    QGroupBox *g3;
    QVBoxLayout *verticalLayout_2;
    QSlider *rotacjaX;
    QSlider *rotacjaY;
    QSlider *rotacjaZ;
    QLabel *Pochylenie;
    QGroupBox *g4;
    QVBoxLayout *verticalLayout_12;
    QSlider *pochylenieX;
    QSlider *pochylenieY;
    QSlider *pochylenieZ;
    QGroupBox *g5;
    QLabel *lblX;
    QLabel *lblY;
    QLabel *lblZ;
    QGroupBox *groupBox1;
    QPushButton *reset;
    QCheckBox *ukryjSciany;
    QCheckBox *teksturowanie;
    QPushButton *quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(684, 588);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(161, 70, 512, 512));
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        sldD = new QSlider(frame);
        sldD->setObjectName(QString::fromUtf8("sldD"));
        sldD->setGeometry(QRect(190, 410, 0, 0));
        sldD->setMinimum(1);
        sldD->setMaximum(1000);
        sldD->setValue(1);
        sldD->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(12, 70, 140, 512));
        g1 = new QGroupBox(groupBox);
        g1->setObjectName(QString::fromUtf8("g1"));
        g1->setGeometry(QRect(20, 25, 120, 95));
        verticalLayout = new QVBoxLayout(g1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        przesuniecieX = new QSlider(g1);
        przesuniecieX->setObjectName(QString::fromUtf8("przesuniecieX"));
        przesuniecieX->setMinimum(-200);
        przesuniecieX->setMaximum(700);
        przesuniecieX->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(przesuniecieX);

        przesuniecieY = new QSlider(g1);
        przesuniecieY->setObjectName(QString::fromUtf8("przesuniecieY"));
        przesuniecieY->setMinimum(-200);
        przesuniecieY->setMaximum(700);
        przesuniecieY->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(przesuniecieY);

        przesuniecieZ = new QSlider(g1);
        przesuniecieZ->setObjectName(QString::fromUtf8("przesuniecieZ"));
        przesuniecieZ->setMinimum(-200);
        przesuniecieZ->setMaximum(700);
        przesuniecieZ->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(przesuniecieZ);

        Skalowanie = new QLabel(groupBox);
        Skalowanie->setObjectName(QString::fromUtf8("Skalowanie"));
        Skalowanie->setGeometry(QRect(0, 125, 140, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Light"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        Skalowanie->setFont(font);
        g2 = new QGroupBox(groupBox);
        g2->setObjectName(QString::fromUtf8("g2"));
        g2->setGeometry(QRect(20, 150, 120, 95));
        verticalLayout_3 = new QVBoxLayout(g2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        skalowanieX = new QSlider(g2);
        skalowanieX->setObjectName(QString::fromUtf8("skalowanieX"));
        skalowanieX->setMaximum(3000);
        skalowanieX->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(skalowanieX);

        skalowanieY = new QSlider(g2);
        skalowanieY->setObjectName(QString::fromUtf8("skalowanieY"));
        skalowanieY->setMaximum(3000);
        skalowanieY->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(skalowanieY);

        skalowanieZ = new QSlider(g2);
        skalowanieZ->setObjectName(QString::fromUtf8("skalowanieZ"));
        skalowanieZ->setMaximum(3000);
        skalowanieZ->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(skalowanieZ);

        g6 = new QGroupBox(groupBox);
        g6->setObjectName(QString::fromUtf8("g6"));
        g6->setGeometry(QRect(0, 150, 18, 90));
        lblX_8 = new QLabel(g6);
        lblX_8->setObjectName(QString::fromUtf8("lblX_8"));
        lblX_8->setGeometry(QRect(2, 2, 16, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Light"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setWeight(50);
        lblX_8->setFont(font1);
        lblY_8 = new QLabel(g6);
        lblY_8->setObjectName(QString::fromUtf8("lblY_8"));
        lblY_8->setGeometry(QRect(2, 36, 16, 23));
        lblY_8->setFont(font1);
        lblZ_8 = new QLabel(g6);
        lblZ_8->setObjectName(QString::fromUtf8("lblZ_8"));
        lblZ_8->setGeometry(QRect(2, 70, 16, 23));
        lblZ_8->setFont(font1);
        g8 = new QGroupBox(groupBox);
        g8->setObjectName(QString::fromUtf8("g8"));
        g8->setGeometry(QRect(0, 410, 18, 90));
        lblX_9 = new QLabel(g8);
        lblX_9->setObjectName(QString::fromUtf8("lblX_9"));
        lblX_9->setGeometry(QRect(2, 2, 16, 23));
        lblX_9->setFont(font1);
        lblY_9 = new QLabel(g8);
        lblY_9->setObjectName(QString::fromUtf8("lblY_9"));
        lblY_9->setGeometry(QRect(2, 36, 16, 23));
        lblY_9->setFont(font1);
        lblZ_9 = new QLabel(g8);
        lblZ_9->setObjectName(QString::fromUtf8("lblZ_9"));
        lblZ_9->setGeometry(QRect(2, 70, 16, 23));
        lblZ_9->setFont(font1);
        g7 = new QGroupBox(groupBox);
        g7->setObjectName(QString::fromUtf8("g7"));
        g7->setGeometry(QRect(0, 280, 18, 90));
        lblX_12 = new QLabel(g7);
        lblX_12->setObjectName(QString::fromUtf8("lblX_12"));
        lblX_12->setGeometry(QRect(2, 2, 16, 23));
        lblX_12->setFont(font1);
        lblY_12 = new QLabel(g7);
        lblY_12->setObjectName(QString::fromUtf8("lblY_12"));
        lblY_12->setGeometry(QRect(2, 36, 16, 23));
        lblY_12->setFont(font1);
        lblZ_12 = new QLabel(g7);
        lblZ_12->setObjectName(QString::fromUtf8("lblZ_12"));
        lblZ_12->setGeometry(QRect(2, 70, 16, 23));
        lblZ_12->setFont(font1);
        Przesuniecie = new QLabel(groupBox);
        Przesuniecie->setObjectName(QString::fromUtf8("Przesuniecie"));
        Przesuniecie->setGeometry(QRect(0, 0, 140, 16));
        Przesuniecie->setFont(font);
        Rotacja = new QLabel(groupBox);
        Rotacja->setObjectName(QString::fromUtf8("Rotacja"));
        Rotacja->setGeometry(QRect(0, 255, 140, 16));
        Rotacja->setFont(font);
        g3 = new QGroupBox(groupBox);
        g3->setObjectName(QString::fromUtf8("g3"));
        g3->setGeometry(QRect(20, 280, 120, 95));
        verticalLayout_2 = new QVBoxLayout(g3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rotacjaX = new QSlider(g3);
        rotacjaX->setObjectName(QString::fromUtf8("rotacjaX"));
        rotacjaX->setMaximum(720);
        rotacjaX->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(rotacjaX);

        rotacjaY = new QSlider(g3);
        rotacjaY->setObjectName(QString::fromUtf8("rotacjaY"));
        rotacjaY->setMaximum(720);
        rotacjaY->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(rotacjaY);

        rotacjaZ = new QSlider(g3);
        rotacjaZ->setObjectName(QString::fromUtf8("rotacjaZ"));
        rotacjaZ->setMaximum(720);
        rotacjaZ->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(rotacjaZ);

        Pochylenie = new QLabel(groupBox);
        Pochylenie->setObjectName(QString::fromUtf8("Pochylenie"));
        Pochylenie->setGeometry(QRect(0, 385, 140, 16));
        Pochylenie->setFont(font);
        g4 = new QGroupBox(groupBox);
        g4->setObjectName(QString::fromUtf8("g4"));
        g4->setGeometry(QRect(20, 410, 120, 95));
        verticalLayout_12 = new QVBoxLayout(g4);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        pochylenieX = new QSlider(g4);
        pochylenieX->setObjectName(QString::fromUtf8("pochylenieX"));
        pochylenieX->setMaximum(5000);
        pochylenieX->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(pochylenieX);

        pochylenieY = new QSlider(g4);
        pochylenieY->setObjectName(QString::fromUtf8("pochylenieY"));
        pochylenieY->setMaximum(5000);
        pochylenieY->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(pochylenieY);

        pochylenieZ = new QSlider(g4);
        pochylenieZ->setObjectName(QString::fromUtf8("pochylenieZ"));
        pochylenieZ->setMaximum(5000);
        pochylenieZ->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(pochylenieZ);

        g5 = new QGroupBox(groupBox);
        g5->setObjectName(QString::fromUtf8("g5"));
        g5->setGeometry(QRect(0, 25, 18, 90));
        QFont font2;
        font2.setPointSize(7);
        g5->setFont(font2);
        lblX = new QLabel(g5);
        lblX->setObjectName(QString::fromUtf8("lblX"));
        lblX->setGeometry(QRect(2, 2, 16, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Light"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        lblX->setFont(font3);
        lblY = new QLabel(g5);
        lblY->setObjectName(QString::fromUtf8("lblY"));
        lblY->setGeometry(QRect(2, 36, 16, 23));
        lblY->setFont(font3);
        lblZ = new QLabel(g5);
        lblZ->setObjectName(QString::fromUtf8("lblZ"));
        lblZ->setGeometry(QRect(2, 70, 16, 23));
        lblZ->setFont(font3);
        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setGeometry(QRect(12, 10, 664, 40));
        reset = new QPushButton(groupBox1);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(444, 0, 100, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Light"));
        font4.setPointSize(13);
        reset->setFont(font4);
        reset->setStyleSheet(QString::fromUtf8("background: #7AC5CD; border-radius: 6px;"));
        ukryjSciany = new QCheckBox(groupBox1);
        ukryjSciany->setObjectName(QString::fromUtf8("ukryjSciany"));
        ukryjSciany->setGeometry(QRect(10, 0, 120, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Light"));
        font5.setPointSize(11);
        ukryjSciany->setFont(font5);
        teksturowanie = new QCheckBox(groupBox1);
        teksturowanie->setObjectName(QString::fromUtf8("teksturowanie"));
        teksturowanie->setGeometry(QRect(150, 0, 120, 40));
        teksturowanie->setFont(font5);
        quit = new QPushButton(groupBox1);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(564, 0, 100, 40));
        quit->setFont(font4);
        quit->setStyleSheet(QString::fromUtf8("background: #7AC5CD; border-radius: 6px;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Projekt", nullptr));
        groupBox->setTitle(QString());
        Skalowanie->setText(QApplication::translate("MainWindow", "Skalowanie:", nullptr));
        lblX_8->setText(QApplication::translate("MainWindow", "X:", nullptr));
        lblY_8->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        lblZ_8->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        lblX_9->setText(QApplication::translate("MainWindow", "X:", nullptr));
        lblY_9->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        lblZ_9->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        lblX_12->setText(QApplication::translate("MainWindow", "X:", nullptr));
        lblY_12->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        lblZ_12->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        Przesuniecie->setText(QApplication::translate("MainWindow", "Przesuni\304\231cie:", nullptr));
        Rotacja->setText(QApplication::translate("MainWindow", "Rotacja:", nullptr));
        Pochylenie->setText(QApplication::translate("MainWindow", "Pochylenie:", nullptr));
        lblX->setText(QApplication::translate("MainWindow", "X:", nullptr));
        lblY->setText(QApplication::translate("MainWindow", "Y:", nullptr));
        lblZ->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        groupBox1->setTitle(QString());
        reset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        ukryjSciany->setText(QApplication::translate("MainWindow", "Ukryj \305\232ciany", nullptr));
        teksturowanie->setText(QApplication::translate("MainWindow", "Teksturowanie", nullptr));
        quit->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
