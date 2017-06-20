#include <string>
#include "Carnes.h"

using namespace std;

#ifndef CERDO_H
#define CERDO_H


class Cerdo : public Carnes{
	private:
		string codigo;

	public:
		Cerdo(string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
