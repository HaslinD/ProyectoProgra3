#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef HELADERIA_H
#define HELADERIA_H
class Heladeria{
	protected:
		double precio;
		string tipo;
		
	public:
		Heladeria(double,string);
		Heladeria();
		double getPrecio();
		void setPrecio(double);

		string getTipo();
		void setTipo(string);

};
#endif