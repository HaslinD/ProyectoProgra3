#include "Limpieza.h"

Limpieza::Limpieza(double precio){
	this->precio=precio;
}
Limpieza::Limpieza(){

}void Limpieza::setPrecio(double precio){
   this-> precio=precio;
}
double Limpieza::getPrecio(){
   return precio;
}

void Limpieza::setTipo(string tipo){
   this-> tipo=tipo;
}

string Limpieza::getTipo(){
   return tipo;
}
