#include "Venta.h"

using namespace std;

Venta :: Venta () {
}

Venta :: Venta (string lugar, string fecha, int numerolocal, string NomApe, int numIdenti, string domicilio) : Factura(lugar, fecha, numerolocal, NomApe, numIdenti, domicilio){
	
}

vector<string> Venta :: getObjetos() {
	return objetos;
}

void Venta :: setObjetos(vector<string> objetos) {
	this -> objetos = objetos;
}

void Venta :: setObjects(string obj) {
	objetos.push_back(obj);
}

string Venta :: Lugar(string lugar) {
	this -> lugar = lugar;
}

string Venta :: Fecha(string fecha) {
	this -> fecha = fecha;
}

int Venta :: NumLocal(int numerolocal) {
	this -> numerolocal = numerolocal;
}

string Venta :: Nombreapellido(string NomApe) {
	this -> NomApe = NomApe;
}

int Venta :: Numidentificacion(int numIdenti) {
	this -> numIdenti = numIdenti;
}

string Venta :: Domicilio(string domicilio) {
	this -> domicilio = domicilio;
}
