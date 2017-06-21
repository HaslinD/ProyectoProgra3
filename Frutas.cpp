#include "Frutas.h"

Frutas::Frutas(string precio,string tipo):Productos(){
	this->precio=precio;
	this->tipo=tipo;
}
Frutas::Frutas(){

}
void Frutas::setPrecio(string precio){
   this-> precio=precio;
}
string Frutas::getPrecio(){
   return precio;
}
void Frutas::setTipo(string tipo){
   this-> tipo=tipo;
}
string Frutas::getTipo(){
   return tipo;
}
