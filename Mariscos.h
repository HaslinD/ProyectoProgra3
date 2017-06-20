#include <string>
#include "Producto.h"

#ifndef MARISCOS_H
#define MARISCOS_H

using namespace std;

class Mariscos:public Productos{
	protected:
		string name;
		string precio;
		string peso;

	private:
		Mariscos();
		Mariscos(string, string, string);
		//set y get de nombre
		string getName();
		void setName(string);
		//set y get de precio
		string getPrecio();
		void setPrecio(string);
		//set y get de cantidad
		string getPeso();
		void setPeso(string);
};


#endif
