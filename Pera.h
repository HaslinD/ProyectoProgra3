#include <string>
#include "Frutas.h"

using namespace std;

#ifndef PERA_H
#define PERA_H

class Pera : public Frutas{
	private:
		string codigo;

	public:
		Pera(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif