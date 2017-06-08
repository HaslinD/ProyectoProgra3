#include <string>

#ifndef MARISCOS_H
#define MARISCOS_H

using namespace std;

class Mariscos{
	public:
		string name;
		double precio;
		double peso;

	private:
		Mariscos();
		Mariscos(string, double, double);
		//set y get de nombre
		string getName();
		void setName(string);
		//set y get de precio 
		double getPrecio();
		void setPrecio(double);
		//set y get de cantidad
		double getPeso();
		void setPeso(double);
};


#endif