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

string Pedido :: Lugar() {
	return lugar;
}

string Pedido :: Fecha() {
	return fecha;
}

string Pedido :: NumLocal() {
	return numerolocal;
}

string Pedido :: Nombreapellido() {
	return NomApe;
}

string Pedido :: Numidentificacion() {
	return numIdenti;
}

string Pedido :: Domicilio() {
	return domicilio;
}
