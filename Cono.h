#include <string>
#include "Heladeria.h"

using namespace std;

#ifndef CONO_H
#define CONO_H

class Cono : public Heladeria{
	private:
		string codigo;

	public:
		Cono(string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
