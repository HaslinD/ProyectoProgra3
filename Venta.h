#include "Factura.h"
#include <vector>
#include <string>

using namespace std;

class Venta : public Factura{
	private:

		vector<string> objetos;

	public:
		Venta();
		Venta(string, string, string, string, string, string);

		vector<string> getObjetos();
		void setObjetos(vector<string> objetos);

		void setObjects(string obj);

		string Lugar(string);
		string Fecha(string);
		string NumLocal(string);
		string Nombreapellido(string);
		string Numidentificacion(string);
		string Domicilio(string);

};
