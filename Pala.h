#include <string>
#include "Herramientas.h"

using namespace std;

#ifndef PALA_H
#define PALA_H


class Pala : public Herramientas{
	private:
		string codigo;

	public:
		Pala(string, string, string);
		//get/set codigo
		string getCodigo();
		void setCodigo(string);

};
<<<<<<< HEAD

#endif
=======
#endif
>>>>>>> 369e19a8fa160a6649013cfe6cf86bb140d6816b
