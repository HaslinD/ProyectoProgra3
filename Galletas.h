#include <string>
#include "Pan.h"

using namespace std;

#ifndef GALLETAS_H
#define GALLETAS_H


class Galletas : public Pan{
	private:
		string codigo;

	public:
		Galletas(string, string, string, string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
