#include "Factura.h"

Factura :: Factura () {

}

Factura :: Factura (string lugar, string fecha, int numerolocal, string NomApe, int numIdenti, string domicilio) {
	this -> lugar = lugar;
	this -> fecha = fecha;
	this -> numerolocal = numerolocal;
	this -> NomApe = NomApe;
	this -> numIdenti = numIdenti;
	this -> domicilio = domicilio;
}