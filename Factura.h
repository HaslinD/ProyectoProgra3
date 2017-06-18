#include <string>

using namespace std;

#ifndef FACTURA_H
#define FACTURA_H

class Factura {
	protected:
		string lugar;
		string fecha;
		int numerolocal;
		string NomApe;
		int numIdenti;
		string domicilio;

	public:
		Factura();
		Factura(string, string, int, string, int, string);

		virtual string Lugar(string) = 0;
		virtual string Fecha(string) = 0;
		virtual int Numlocal(int) = 0;
		virtual string Nombreapellido(string) = 0;
		virtual int Numidentificacion(int) = 0;
		virtual string Domicilio(string) = 0;

};
#endif