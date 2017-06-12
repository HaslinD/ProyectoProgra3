#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef FRUTAS_H
#define FRUTAS_H
class Frutas{
	protected:
		double precio;
		string tipo;
	public:
		Frutas(double,string);
		Frutas();
		double getPrecio();
		void setPrecio(double);

		string getTipo();
		void setTipo(string);

};
#endif