#include <string>

#ifndef JUGUETERIA_H
#define JUGUETERIA_H

using namespace std;

class Jugueteria {
	protected:
		string name;
		string marca;
		double precio;
		string tipo;

	public:
		Jugueteria();
		Jugueteria(string, string, double, string);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getMarca();
		void setMarca(string);
		//Metodos get/set marca
		double getPrecio();
		void setPrecio(double);
		//Metodos get/set tipo juguete
		string getTipo();
		void setTipo(string);
};

#endif