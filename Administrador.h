#include "Usuario.h"
#include <string>

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H 

class Administrador : public Usuario {
	private:
		int id;

	public:
		Administrador();
		Administrador(int, string, string);

		int getID();
		void setID(int);

};
#endif