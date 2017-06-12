#include "Bebidas.h"

Bebidas::Bebidas(double precio,string sabor){
	this->precio=precio;
	this->sabor=sabor;
}
Bebidas::Bebidas(){

}void Bebidas::setPrecio(double precio){
   this-> precio=precio;
}
double Bebidas::getPrecio(){
   return precio;
}
void Bebidas::setSabor(string sabor){
   this-> sabor=sabor;
}
string Bebidas::getSabor(){
   return sabor;
}
