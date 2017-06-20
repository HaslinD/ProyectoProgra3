#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H
class Herramientas : public Productos{
	protected:
		string tipo;
		string precio;
	public:
		Herramientas(string,string);
		Herramientas();
		string getTipo();
		void setTipo(string);

		string getPrecio();
		void setPrecio(string);

};
#endif
