#include <string>
#include "Verduras.h"

using namespace std;

#ifndef TOMATE_H
#define TOMATE_H


class Tomate : public Verduras{
	private:
		string codigo;

	public:
		Tomate(string, string, double, int);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif