#include <string>
#include "Limpieza.h"

using namespace std;

#ifndef ASE_H
#define ASE_H


class Ase : public Limpieza{
	private:
		string codigo;

	public:
		Ase(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif