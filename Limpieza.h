#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef LIMPIEZA_H
#define LIMPIEZA_H
class Limpieza{
	protected:
		double precio;
		string tipo;
	public:
		Limpieza(double, tipo);
		Limpieza();
		double getPrecio();
		void setPrecio(double);
		string getTipo();
		void setTipo(string);
		

};
#endif
