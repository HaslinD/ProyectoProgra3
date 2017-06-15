#include <string>
#include "Mariscos.h"

using namespace std;

#ifndef PEZ_H
#define PEZ_H


class Pez : public Mariscos{
	private:
		string codigo;

	public:
		Pez(string, string, double, double);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif