#include <string>
#include "Heladeria.h"

using namespace std;

#ifndef SUNDAE_H
#define SUNDAE_H


class Sundae : public Heladeria{
	private:
		string codigo;

	public:
		Sundae(string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
