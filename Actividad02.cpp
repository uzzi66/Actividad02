//Actividad 2
//Reyes Becerra Uzziel

#include<iostream>
#include<vector>
using namespace std;

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

int main(){
	Neurona n1(4,4,4,4,4,4,4);
	Neurona n2(6,36,36,63,63,36,6);
	Neurona n3(5,5,5,5,5,5,5);
	administrar a1;
	a1.agregar_inicio(n1);
	a1.agregar_final(n3);
	a1.agregar_final(n2);
	a1.mostrar();
	return 0;
}