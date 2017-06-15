#include <string>
#include "Carnes.h"

using namespace std;

#ifndef RES_H
#define RES_H


class Res : public Carnes{
	private:
		string codigo;

	public:
		Res(string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif