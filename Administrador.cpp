#include "Administrador.h"

using namespace std;

Administrador :: Administrador () {

}

Administrador :: Administrador (string id, string password, string user) : Usuario(password, user) {
	this -> id = id;
}

string Administrador :: getID() {
	return id;
}

void Administrador :: setID(string id) {
	this -> id = id;
}

void Administrador::metodo(){
	
}
