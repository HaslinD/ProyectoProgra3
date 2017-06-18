#include <string>
#include "Verduras.h"

using namespace std;

#ifndef PEPINO_H
#define PEPINO_H


class Pepino : public Verduras{
	private:
		string codigo;

	public:
		Pepino(string, string, double, int);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif