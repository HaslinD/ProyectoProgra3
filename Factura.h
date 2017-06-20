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

		virtual string Lugar(string) = 0;
		virtual string Fecha(string) = 0;
		virtual string Numlocal(string) = 0;
		virtual string Nombreapellido(string) = 0;
		virtual string Numidentificacion(string) = 0;
		virtual string Domicilio(string) = 0;

};
#endif
