#include <string>

using namespace std;

#ifndef LICORES_H
#define LICORES_H

class Licores :public Productos{
	protected:
		string name;
		string marca;
		string precio;
		string cantidadML;

	public:
		Licores();
		Licores(string, string, string, string);
		//metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getMarca();
		void setMarca(string);
		//Metodos get/set marca
		string getPrecio();
		void setPrecio(string);
		//Metodos get/set tipo juguete
		string getCantidadML();
		void setCantidadML(string);

};

#endif
