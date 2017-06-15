#include <string>
#include "Frutas.h"

using namespace std;

#ifndef MANZANA_H
#define MANZANA_H


class Manzana : public Frutas{
	private:
		string codigo;

	public:
		Manzana(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif