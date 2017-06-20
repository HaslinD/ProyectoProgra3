#include "Pedido.h"

using namespace std;

Pedido :: Pedido () {
}

Pedido :: Pedido (string descripcion, string lugar, string fecha, string numerolocal, string NomApe, string numIdenti, string domicilio) : Factura(lugar, fecha, numerolocal, NomApe, numIdenti, domicilio){
	this -> descripcion = descripcion;
}

string Pedido :: getDescripcion() {
	return descripcion;
}

void Pedido :: setDescripcion(string descripcion) {
	this -> descripcion = descripcion;
}

vector<string> Pedido :: getObjetos() {
	return objetos;
}

void Pedido :: setObjetos(vector<string> objetos) {
	this -> objetos = objetos;
}

void Pedido :: setObjects(string obj) {
	objetos.push_back(obj);
}

string Pedido :: Lugar(string lugar) {
	this -> lugar = lugar;
}

string Pedido :: Fecha(string fecha) {
	this -> fecha = fecha;
}

string Pedido :: NumLocal(string numerolocal) {
	this -> numerolocal = numerolocal;
}

string Pedido :: Nombreapellido(string NomApe) {
	this -> NomApe = NomApe;
}

string Pedido :: Numidentificacion(string numIdenti) {
	this -> numIdenti = numIdenti;
}

string Pedido :: Domicili(string domicilio) {
	this -> domicilio = domicilio;
}
