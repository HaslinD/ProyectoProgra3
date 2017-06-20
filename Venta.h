#include "Factura.h"
#include <vector>
#include <string>

using namespace std;

class Venta : public Factura{
	private:
		
		vector<string> objetos;

	public:
		Venta();
		Venta(string, string, int, string, int, string);

		vector<string> getObjetos();
		void setObjetos(vector<string> objetos);

		void setObjects(string obj);

		void Lugar(string);
		void Fecha(string);
		void NumLocal(int);
		void Nombreapellido(string);
		void Numidentificacion(int);
		void Domicilio(string);

};