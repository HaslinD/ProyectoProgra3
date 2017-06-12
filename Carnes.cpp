#include "Carnes.h"

Carnes::Carnes(double precio,string tipo){
	this->precio=precio;
	this->tipo=tipo;
}
Carnes::Carnes(){

}void Carnes::setPrecio(double precio){
   this-> precio=precio;
}
double Carnes::getPrecio(){
   return precio;
}
void Carnes::setTipo(string tipo){
   this-> tipo=tipo;
}
string Carnes::getTipo(){
   return tipo;
}
