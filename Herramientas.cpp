#include "Herramientas.h"

Herramientas::Herramientas(string tipo,double precio){
	this->tipo=tipo;
	this->precio=precio;
}
Herramientas::Herramientas(){

}void Herramientas::setTipo(string tipo){
   this-> tipo=tipo;
}
string Herramientas::getTipo(){
   return tipo;
}
void Herramientas::setPrecio(double precio){
   this-> precio=precio;
}
double Herramientas::getPrecio(){
   return precio;
}
