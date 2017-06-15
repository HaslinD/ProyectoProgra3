#include <string>
#include "Heladeria.h"

using namespace std;

#ifndef SUNDAE_H
#define SUNDAE_H


class Sundae : public Heladeria{
	private:
		int codigo;

	public:
		Sundae(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif