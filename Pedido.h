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
		Pedido(string, string, string, string, string, string, string);

		string getDescripcion();
		void setDescripcion(string);

		vector<string> getObjetos();
		void setObjetos(vector<string> objetos);

		void setObjects(string obj);

		string Lugar();
		string Fecha();
		string NumLocal();
		string Nombreapellido();
		string Numidentificacion();
		string Domicili();

};
