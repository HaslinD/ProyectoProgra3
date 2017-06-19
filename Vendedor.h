#include "Usuario.h"
#include <string>

using namespace std;

#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor : public Usuario{
	private:
		string id;
		string puesto;

	public:
		Vendedor();
		Vendedor(string, string, string, string);

		string getID();
		void setID(string);

		string getPuesto();
		void setPuesto(string);

		virtual void metodo();

};
#endif
