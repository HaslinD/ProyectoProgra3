#include "Heladeria.h"

Heladeria::Heladeria(double precio,string tipo){
	this->precio=precio;
	this->tipo=tipo;
}
Heladeria::Heladeria(){

}void Heladeria::setPrecio(double precio){
   this-> precio=precio;
}
double Heladeria::getPrecio(){
   return precio;
}
void Heladeria::setTipo(string tipo){
   this-> tipo=tipo;
}
string Heladeria::getTipo(){
   return tipo;
}
