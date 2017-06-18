#include <string>
#include "Bebidas.h"

using namespace std;

#ifndef PEPSI_H
#define PEPSI_H

class Pepsi : public Bebidas{
	private:
		string codigo;

	public:
		Pepsi(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif