#include "Factura.h"
#include <vector>
#include <string>

using namespace std;

class Pedido : public Factura{
	private:
		string descripcion;
		vector<string> objetos;

	public:
		Pedido();
		Pedido(string, string, string, int, string, int, string);

		string getDescripcion();
		void setDescripcion(string);

		vector<string> getObjetos();
		void setObjetos(vector<string> objetos);

		void setObjects(string obj);

		string Lugar(string);
		string Fecha(string);
		int NumLocal(int);
		string Nombreapellido(string);
		int Numidentificacion(int);
		string Domicili(string);

};