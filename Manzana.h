#include <string>
#include "Frutas.h"

using namespace std;

#ifndef MANZANA_H
#define MANZANA_H


class Manzana : public Frutas{
	private:
		int codigo;

	public:
		Manzana(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif