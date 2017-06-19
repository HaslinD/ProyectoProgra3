#include "Usuario.h"
#include <string>

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Usuario {
	private:
		string id;

	public:
		Administrador();
		Administrador(string, string, string);

		string getID();
		void setID(string);

		virtual void metodo();

};
#endif
