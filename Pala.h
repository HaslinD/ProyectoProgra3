#include <string>
#include "Herramientas.h"

using namespace std;

#ifndef PALA_H
#define PALA_H


class Pala : public Herramientas{
	private:
		string codigo;

	public:
		Pala(string, string, double);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};