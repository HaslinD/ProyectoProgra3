#include <string>
#include "Producto.h"

using namespace std;

#ifndef VERDURAS_H
#define VERDURAS_H

class Verduras {
	protected:
		string name;
		string frescura;
		string precioVerdura;
		string cantidad;

	public:
		Verduras();
		Verduras(string, string, string, string);
		Verduras(string, string, string);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio por verdura
		string getPrecioverdura();
		void setPrecioverdura(string);
		//Metodos get/set tipo juguete
		string getCantidad();
		void setCantidad(string);

};

#endif
