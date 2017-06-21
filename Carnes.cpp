#include "Carnes.h"

Carnes::Carnes(string precio,string tipo):Productos(){
	this->precio=precio;
	this->tipo=tipo;
}
Carnes::Carnes(){

}
void Carnes::setPrecio(string precio){
   this-> precio=precio;
}
string Carnes::getPrecio(){
   return precio;
}
void Carnes::setTipo(string tipo){
   this-> tipo=tipo;
}
string Carnes::getTipo(){
   return tipo;
}
