#include <string>
#include "Limpieza.h"

using namespace std;

#ifndef CLORO_H
#define CLORO_H


class Cloro : public Limpieza{
	private:
		string codigo;

	public:
		Cloro(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif