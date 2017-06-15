#include <string>
#include "Carnes.h"

using namespace std;

#ifndef CERDO_H
#define CERDO_H


class Cerdo : public Carnes{
	private:
		int codigo;

	public:
		Cerdo(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif