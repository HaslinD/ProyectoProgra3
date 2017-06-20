#include <iostream>
#include <string>
#include <vector>
#include "Productos.h"

using namespace std;

#ifndef LIMPIEZA_H
#define LIMPIEZA_H
class Limpieza:public Productos{
	protected:
		string precio;
		string tipo;
	public:
		Limpieza(string, string);
		Limpieza();
		string getPrecio();
		void setPrecio(string);
		string getTipo();
		void setTipo(string);


};
#endif
