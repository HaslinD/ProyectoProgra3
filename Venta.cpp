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

void Venta :: Lugar(string lugar) {
	return lugar;
}

void Venta :: Fecha(string fecha) {
	return fecha;
}

void Venta :: NumLocal(int numerolocal) {
	return numerolocal;
}

void Venta :: Nombreapellido(string NomApe) {
	return NomApe;
}

void Venta :: Numidentificacion(int numIdenti) {
	return numIdenti;
}

void Venta :: Domicilio(string domicilio) {
	return domicilio;
}
