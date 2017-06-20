#include <string>
#include "Producto.h"

#ifndef JUGUETERIA_H
#define JUGUETERIA_H

using namespace std;

class Jugueteria : public Jugueteria{
	protected:
		string name;
		string marca;
		string precio;
		string tipo;

	public:
		Jugueteria();
		Jugueteria(string, string, string, string);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getMarca();
		void setMarca(string);
		//Metodos get/set marca
		string getPrecio();
		void setPrecio(string);
		//Metodos get/set tipo juguete
		string getTipo();
		void setTipo(string);
};

#endif
