#include <string>
#include "Herramientas.h"

using namespace std;

#ifndef MARTILLO_H
#define MARTILLO_H


class Martillo : public Herramientas{
	private:
		string codigo;

	public:
		Martillo(string, string, double);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};