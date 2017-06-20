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

		virtual void Lugar(string) = 0;
		virtual void Fecha(string) = 0;
		virtual void Numlocal(int) = 0;
		virtual void Nombreapellido(string) = 0;
		virtual void Numidentificacion(int) = 0;
		virtual void Domicilio(string) = 0;

};
#endif