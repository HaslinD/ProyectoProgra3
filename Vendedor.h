#include "Usuario.h"
#include <string>

using namespace std;

#ifndef VENDEDOR_H
#define VENDEDOR_H 

class Vendedor : public Usuario{
	private:
		int id;
		string puesto;

	public:
		Vendedor();
		Vendedor(int, string, string, string);

		int getID();
		void setID(int);

		string getPuesto();
		void setPuesto(string);

};
#endif