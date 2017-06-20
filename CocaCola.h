#include <string>
#include "Bebidas.h"

using namespace std;

#ifndef COCACOLA_H
#define COCACOLA_H


class CocaCola : public Bebidas{
	private:
		string codigo;

	public:
		CocaCola(string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif
