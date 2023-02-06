#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Neurona::Neurona(int i,float v,int px,int py,int r,int b,int g){
    id=i;
    voltaje=v;
    posicion_x=px;
    posicion_y=py;
    red=r;
    blue=b;
    green=g;
}

void Neurona::print(){
    cout<<"ID:"<<id<<endl;
    cout<<"Voltaje:"<<voltaje<<endl;
    cout<<"Posicion x:"<<posicion_x<<endl;
    cout<<"Posicion y:"<<posicion_y<<endl;
    cout<<"Rojo:"<<red<<endl;
    cout<<"Azul:"<<blue<<endl;
    cout<<"Verde:"<<green<<endl;
}

administrar::administrar(){
    aux=0;
}

void administrar::agregar_inicio(Neurona n){
    vect.insert(vect.begin(), n);
    aux++;
}

void administrar::agregar_final(Neurona n){
    vect.insert(vect.end(), n);
    aux++;
}

void administrar::mostrar(){
    for(int i=0;i<aux;i++){
        vect[i].print();
    }
}
