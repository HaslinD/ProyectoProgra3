#include "Productos.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef BEBIDAS_H
#define BEBIDAS_H
class Bebidas:public Productos{
	protected:
		string precio;
		string sabor;
	public:
		Bebidas(string,string);
		Bebidas();
		string getPrecio();
		void setPrecio(string);

		string getSabor();
		void setSabor(string);

};
#endif
