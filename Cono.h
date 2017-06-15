#include <string>
#include "Heladeria.h"

using namespace std;

#ifndef CONO_H
#define CONO_H


class Cono : public Heladeria{
	private:
		int codigo;

	public:
		Cono(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif