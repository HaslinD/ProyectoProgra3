#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H
class Herramientas{
	protected:
		string tipo;
		double precio;
	public:
		Herramientas(string,double);
		Herramientas();
		string getTipo();
		void setTipo(string);

		double getPrecio();
		void setPrecio(double);

};
#endif