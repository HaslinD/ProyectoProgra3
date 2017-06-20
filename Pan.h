#include <string>
#include "Producto.h"

using namespace std;

#ifndef PAN_H
#define PAN_H 

class Pan {
	protected:
		string name;
		string estado;
		double precio;
		string tipo;
		string fechaVencimiento;

	public:
		Pan();
		Pan(string, string, double, string, string);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getEstado();
		void setEstado(string);
		//Metodos get/set Frescura
		double getPrecio();
		void setPrecio(double);
		//Metodos get/set tipo
		string getTipo();
		void setTipo(string);
		//metodos get/set Fecha de vencimiento
		string getVence();
		void setVence(string);


};
#endif