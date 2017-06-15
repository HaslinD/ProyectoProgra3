#include <string>
#include "Bebidas.h"

using namespace std;

#ifndef PEPSI_H
#define PEPSI_H

class Pepsi : public Bebidas{
	private:
		int codigo;

	public:
		Pepsi(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif