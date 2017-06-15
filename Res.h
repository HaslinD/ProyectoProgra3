#include <string>
#include "Carnes.h"

using namespace std;

#ifndef RES_H
#define RES_H


class Res : public Carnes{
	private:
		int codigo;

	public:
		Res(int, double, string);
		//get/set codigo
		int getCodigo();
		void setCodigo(int);

};
#endif