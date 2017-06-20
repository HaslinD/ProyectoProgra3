#include <string>
#include "Licores.h"

using namespace std;

#ifndef TEQUILA_H
#define TEQUILA_H


class Tequila : public Licores{
	private:
		string codigo;

	public:
		Tequila(string, string, string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
