#include <string>
#include "Jugueteria.h"

using namespace std;

#ifndef PUZZLE_H
#define PUZZLE_H


class Puzzle : public Jugueteria{
	private:
		string codigo;

	public:
		Puzzle(string, string, string, double, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
#endif