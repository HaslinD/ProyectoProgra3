#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef HELADERIA_H
#define HELADERIA_H
class Heladeria:public Productos{
	protected:
		string precio;
		string tipo;

	public:
		Heladeria(string,string);
		Heladeria();
		string getPrecio();
		void setPrecio(string);

		string getTipo();
		void setTipo(string);

};
#endif
