#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef CARNES_H
#define CARNES_H
class Carnes : public Productos{
	protected:
		string precio;
		string tipo;

	public:
		Carnes(string,string);
		Carnes();
		string getPrecio();
		void setPrecio(string);

		string getTipo();
		void setTipo(string);

};
#endif
