#include <string>
#include "Jugueteria.h"

using namespace std;

#ifndef LEGO_H
#define LEGO_H


class Lego : public Jugueteria{
	private:
		string codigo;

	public:
		Lego(string, string, string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif