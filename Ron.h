#include <string>
#include "Licores.h"

using namespace std;

#ifndef RON_H
#define RON_H


class Ron : public Licores{
	private:
		string codigo;

	public:
		Ron(string, string, string, double, int);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif