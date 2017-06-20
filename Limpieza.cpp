#include "Limpieza.h"

Limpieza::Limpieza(string precio, string tipo):Productos(){
	this->precio=precio;
	this -> tipo = tipo;
}
Limpieza::Limpieza(){

}
void Limpieza::setPrecio(string precio){
   this-> precio=precio;
}
string Limpieza::getPrecio(){
   return precio;
}

void Limpieza::setTipo(string tipo){
   this-> tipo=tipo;
}

string Limpieza::getTipo(){
   return tipo;
}
