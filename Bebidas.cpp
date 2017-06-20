#include "Bebidas.h"

Bebidas::Bebidas(string precio,string sabor):Productos(){
	this->precio=precio;
	this->sabor=sabor;
}
Bebidas::Bebidas(){

}void Bebidas::setPrecio(string precio){
   this-> precio=precio;
}
string Bebidas::getPrecio(){
   return precio;
}
void Bebidas::setSabor(string sabor){
   this-> sabor=sabor;
}
string Bebidas::getSabor(){
   return sabor;
}
