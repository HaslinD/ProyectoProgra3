#include "Sistema.h"
#include "Usuario.h"
using namespace std;

Sistema::Sistema(){

}


void Sistema::setUsuarios(Usuario* user){
   this-> usuarios.push_back(user);
}
vector<Usuario*>& Sistema::getUsuarios(){
   return usuarios;
}


void Sistema::run(){
  initscr();
  echo();

  mvprintw(5, 20, "LOGIN:");
  mvprintw(6, 20, "Ingrese su Usuario: ");
  char user[10];
  getstr(user);
  string usuario = static_cast<char*>(user);
  mvprintw(7, 20, "Ingrese su Contraseña: ");
  char pass[10];
  getstr(pass);
  string password = static_cast<char*>(pass);
  //usuarios=static_cast<
  for (int i = 0; i < usuarios.size(); i++) {
    if(usuario==usuarios[i]->getUser() & password==usuarios[i]->getPassword()){
        cleanScreen();
        mvprintw(9, 20, "Entro ");
        break;
    }else{
      cleanScreen();
      mvprintw(9, 20, "Usuario y Contraseña Incorrectos");


    }
  }

  getch();//una pausa de pantalla
  cleanScreen();
  noecho();
  endwin();
}

void Sistema::cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}
