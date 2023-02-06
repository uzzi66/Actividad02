#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

class Neurona{
    private:
        int id;
        float voltaje;
        int posicion_x;
        int posicion_y;
        int red;
        int blue;
        int green;
    public:
        void print();
        Neurona(int i,float v,int px,int py,int r,int b,int g);
};

class administrar{
    private:
        vector<Neurona> vect;
        int aux;
    public:
        administrar();
        void agregar_inicio(Neurona n);
        void agregar_final(Neurona n);
        void mostrar();
};
