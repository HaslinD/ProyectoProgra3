#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

#ifndef BEBIDAS_H
#define BEBIDAS_H
class Bebidas{
	protected:
		double precio;
		string sabor;
	public:
		Bebidas(double,string);
		Bebidas();
		double getPrecio();
		void setPrecio(double);

		string getSabor();
		void setSabor(string);

};
#endif