#include <string>

using namespace std;

#ifndef VERDURAS_H
#define VERDURAS_H

class Verduras {
	protected:
		string name;
		string frescura;
		double precioVerdura;
		int cantidad;

	public:
		Verduras();
		Verduras(string, string, double, int);
		Verduras(string, double, int);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio por verdura
		double getPrecioverdura();
		void setPrecioverdura(double);
		//Metodos get/set tipo juguete
		int getCantidad();
		void setCantidad(int);

};

#endif