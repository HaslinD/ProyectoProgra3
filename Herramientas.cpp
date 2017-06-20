#include "Herramientas.h"

Herramientas::Herramientas(string tipo,string precio):Productos(){
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
void Herramientas::setPrecio(string precio){
   this-> precio=precio;
}
string Herramientas::getPrecio(){
   return precio;
}
