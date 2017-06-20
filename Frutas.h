#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef FRUTAS_H
#define FRUTAS_H
class Frutas:public Productos{
	protected:
		string precio;
		string tipo;

	public:
		Frutas(string,string);
		Frutas();
		string getPrecio();
		void setPrecio(string);

		string getTipo();
		void setTipo(string);

};
#endif
