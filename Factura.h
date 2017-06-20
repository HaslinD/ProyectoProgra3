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

		virtual string Lugar();
		virtual string Fecha();
		virtual string Numlocal();
		virtual string Nombreapellido();
		virtual string Numidentificacion();
		virtual string Domicilio();
};
#endif
