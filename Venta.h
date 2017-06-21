#include "Factura.h"
#include <vector>
#include <string>

using namespace std;

#ifndef VENTA_H
#define VENTA_H 

class Venta : public Factura{
	private:

		vector<string> objetos;

	public:
		Venta();
		Venta(string, string, string, string, string, string);

		vector<string> getObjetos();
		void setObjetos(vector<string> objetos);

		string Lugar();
		string Fecha();
		//string NumLocal();
		string Nombreapellido();
		string Numidentificacion();
		string Domicilio();


};
#endif