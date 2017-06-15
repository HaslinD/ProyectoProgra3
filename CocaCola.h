#include <string>
#include "Bebidas.h"

using namespace std;

#ifndef COCACOLA_H
#define COCACOLA_H


class CocaCola : public Bebidas{
	private:
		int codigo;

	public:
		CocaCola(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif
