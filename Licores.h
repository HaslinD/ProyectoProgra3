#include <string>

using namespace std;

#ifndef LICORES_H
#define LICORES_H 

class Licores {
	protected:
		string name;
		string marca;
		double precio;
		int cantidad;

	public:
		//metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getMarca();
		void setMarca(string);
		//Metodos get/set marca
		double getPrecio();
		void setPrecio(double);
		//Metodos get/set tipo juguete
		int getCantidad();
		void setCantidad(int);
	
};

#endif