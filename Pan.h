#include <string>

using namespace std;

#ifndef PAN_H
#define PAN_H

class Pan :public Productos{
	protected:
		string name;
		string estado;
		string precio;
		string tipo;
		string fechaVencimiento;

	public:
		Pan();
		Pan(string, string, string, string, string);
		//Metodos get/set nombre
		string getName();
		void setName(string);
		//Metodos get/set precio
		string getEstado();
		void setEstado(string);
		//Metodos get/set Frescura
		string getPrecio();
		void setPrecio(string);
		//Metodos get/set tipo
		string getTipo();
		void setTipo(string);
		//metodos get/set Fecha de vencimiento
		string getVence();
		void setVence(string);


};
#endif
