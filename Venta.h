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

		string Lugar(string);
		string Fecha(string);
		int NumLocal(int);
		string Nombreapellido(string);
		int Numidentificacion(int);
		string Domicilio(string);

};