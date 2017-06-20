#include <string>

using namespace std;

#ifndef FACTURA_H
#define FACTURA_H

class Factura {
	protected:
		string lugar;
		string fecha;
		string numerolocal;
		string NomApe;
		string numIdenti;
		string domicilio;

	public:
		Factura();
		Factura(string, string, string, string, string, string);

		virtual string Lugar() = 0;
		virtual string Fecha() = 0;
		virtual string Numlocal() = 0;
		virtual string Nombreapellido() = 0;
		virtual string Numidentificacion() = 0;
		virtual string Domicilio() = 0;
};
#endif
