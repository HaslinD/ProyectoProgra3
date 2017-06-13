#include "Frutas.h"

Frutas::Frutas(double precio,string tipo){
	this->precio=precio;
	this->tipo=tipo;
}
Frutas::Frutas(){

}void Frutas::setPrecio(double precio){
   this-> precio=precio;
}
double Frutas::getPrecio(){
   return precio;
}
void Frutas::setTipo(string tipo){
   this-> tipo=tipo;
}
string Frutas::getTipo(){
   return tipo;
}
