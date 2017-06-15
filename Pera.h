#include <string>
#include "Frutas.h"

using namespace std;

#ifndef PERA_H
#define PERA_H

class Pera : public Frutas{
	private:
		int codigo;

	public:
		Pera(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif