#include <string>
#include "Mariscos.h"

using namespace std;

#ifndef CAMARON_H
#define CAMARON_H


class Camaron : public Mariscos{
	private:
		string codigo;

	public:
		Camaron(string, string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
