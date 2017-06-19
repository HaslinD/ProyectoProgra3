#include "Pedido.h"

using namespace std;

Pedido :: Pedido () {
}

Pedido :: Pedido (string descripcion, string lugar, string fecha, int numerolocal, string NomApe, int numIdenti, string domicilio) : Factura(lugar, fecha, numerolocal, NomApe, numIdenti, domicilio){
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

int Pedido :: NumLocal(int numerolocal) {
	this -> numerolocal = numerolocal;
}

string Pedido :: Nombreapellido(string NomApe) {
	this -> NomApe = NomApe;
}

int Pedido :: Numidentificacion(int numIdenti) {
	this -> numIdenti = numIdenti;
}

string Pedido :: Domicili(string domicilio) {
	this -> domicilio = domicilio;
}