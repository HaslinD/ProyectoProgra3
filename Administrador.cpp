#include "Administrador.h"

using namespace std;

Administrador :: Administrador () {

}

Administrador :: Administrador (int id, string password, string user) : Usuario(password, user) {
	this -> id = id;
}

int Administrador :: getID() {
	return id;
}

void Administrador :: setID(int id) {
	this -> id = id;
}
