#include "Usuario.h"

Usuario::Usuario(string password,string user){
	this->password=password;
	this->user=user;
}
Usuario::Usuario(){

}void Usuario::setPassword(string password){
   this-> password=password;
}
string Usuario::getPassword(){
   return password;
}
void Usuario::setUser(string user){
   this-> user=user;
}
string Usuario::getUser(){
   return user;
}
