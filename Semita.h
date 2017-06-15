#include <string>
#include "Pan.h"

using namespace std;

#ifndef SEMITA_H
#define SEMITA_H


class Semita : public Pan{
	private:
		string codigo;

	public:
		Semita(string, string, string, double, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif