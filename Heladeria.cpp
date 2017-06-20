#include "Heladeria.h"

Heladeria::Heladeria(string precio,string tipo):Productos(){
	this->precio=precio;
	this->tipo=tipo;
}
Heladeria::Heladeria(){

}void Heladeria::setPrecio(string precio){
   this-> precio=precio;
}
string Heladeria::getPrecio(){
   return precio;
}
void Heladeria::setTipo(string tipo){
   this-> tipo=tipo;
}
string Heladeria::getTipo(){
   return tipo;
}
