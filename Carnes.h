#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef CARNES_H
#define CARNES_H
class Carnes{
	protected:
		double precio;
		string tipo;
		
	public:
		Carnes(double,string);
		Carnes();
		double getPrecio();
		void setPrecio(double);

		string getTipo();
		void setTipo(string);

};
#endif