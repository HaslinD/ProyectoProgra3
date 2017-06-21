#include "Venta.h"
#include <sstream>
#include <string>

using namespace std;

Venta :: Venta () {
}

Venta :: Venta (string lugar, string fecha, string numerolocal, string NomApe, string numIdenti, string domicilio) : Factura(lugar, fecha, numerolocal, NomApe, numIdenti, domicilio){

}

vector<string> Venta :: getObjetos() {
	return objetos;
}

void Venta :: setObjetos(vector<string> objetos) {
	this -> objetos = objetos;
}

string Venta :: Lugar() {
	return lugar;
}

string Venta :: Fecha() {
	return fecha;
}

/*string Venta :: NumLocal() {
	return numerolocal;
}*/

string Venta :: Nombreapellido() {
	return NomApe;
}

string Venta :: Numidentificacion() {
	return numIdenti;
}

string Venta :: Domicilio() {
	return domicilio;
}
