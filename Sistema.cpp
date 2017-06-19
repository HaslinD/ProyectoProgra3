#include "Sistema.h"
#include "Usuario.h"
#include "Bebidas.h"
#include "Carnes.h"
#include "Frutas.h"
#include "Heladeria.h"
#include "Herramientas.h"
#include "Jugueteria.h"
#include "Licores.h"
#include "Limpieza.h"
#include "Mariscos.h"
#include "Pan.h"
#include "Verduras.h"
#include "Administrador.h"
#include "Vendedor.h"


using namespace std;

Sistema::Sistema(){

}


/*void Sistema::setUsuarios(Usuario* user){
   this-> usuarios.push_back(user);
}
vector<Usuario*>& Sistema::getUsuarios(){
   return usuarios;
}*/


void Sistema::run(){
  initscr();
  start_color();
	echo();
  /*Usuario* user=new Administrador("122","123","Haziel");
  usuarios.push_back(user);*/
  bool libre=false;
  archivo1.open("Usuario.txt",ios::app);
  while(!libre){
    mvprintw(4, 20, "BIENVENIDO AL SISTEMA");
    mvprintw(5, 10, "[1]. Registrarse");
    mvprintw(6, 10, "[2]. Log In");
    mvprintw(7, 10, "[3]. Salir");
    mvprintw(8, 10, "Ingrese la opcion: ");
    char opcion[1];
    getstr(opcion);
    getch();
    cleanScreen();
    if (opcion[0]=='1'){//Registrarse
      bool libre=false;
      while (!libre){
        mvprintw(5, 10, "Bienvenido");
        mvprintw(6, 10, "[1]. Administrador:");
        mvprintw(7, 10, "[2]. Vendedor:");
        mvprintw(8, 10, "[3]. Salir:");
        mvprintw(9, 10, "Como desea registrarse?: ");
        char opcion[1];
        getstr(opcion);
        getch();
        if (opcion[0]=='1'){ //sign up Administrador
          cleanScreen();
          mvprintw(5, 10, "Ingrese su Id: ");
          char id1[10];
          getstr(id1);
          string id= static_cast<char*>(id1);
          mvprintw(6, 10, "Ingrese su Usuario: ");
          char user[10];
          getstr(user);
          string usuario = static_cast<char*>(user);
          mvprintw(7, 10, "Ingrese su Contraseña: ");
          char password[10];
          getstr(password);
          string contrasena = static_cast<char*>(password);
          Usuario* admin=new Administrador(id,contrasena,usuario);
          usuarios.push_back(admin);
          mvprintw(10, 10, "Se registró correctamente");
          getch();
        }else if (opcion[0]=='2'){//sign up Vendedor
          cleanScreen();
          mvprintw(5, 10, "Ingrese su Id: ");
          char id1[15];
          getstr(id1);
          string id= static_cast<char*>(id1);
          mvprintw(6, 10, "Ingrese su Puesto: ");
          char puesto1[15];
          getstr(puesto1);
          string puesto= static_cast<char*>(puesto1);
          mvprintw(7, 10, "Ingrese su Usuario: ");
          char user[15];
          getstr(user);
          string usuario = static_cast<char*>(user);
          mvprintw(8, 10, "Ingrese su Contraseña: ");
          char password[15];
          getstr(password);
          string contrasena = static_cast<char*>(password);
          Usuario* vendedor=new Vendedor(id,puesto,contrasena,usuario);
          usuarios.push_back(vendedor);
          mvprintw(10, 10, "Se registró correctamente");
          getch();

        }else if (opcion[0]=='3'){
          cleanScreen();
          libre=true;
        }else {
          cleanScreen();
          mvprintw(5,20,"Opcion no valida, intente de nuevo...");
          getch();
        }
        cleanScreen();
      }//while salir de Registrarse
      getch();

    }//fin Registrarse
    else if (opcion[0]=='2'){ //login
      string usuario,password;
      mvprintw(5, 10, "LOGIN:");
      mvprintw(6, 10, "Ingrese su Usuario: ");
      char user[15];
      getstr(user);
      usuario = static_cast<char*>(user);
      //string usuario=user;
      mvprintw(7, 10, "Ingrese su Contraseña: ");
      char pass[15];
      getstr(pass);
      password = static_cast<char*>(pass);
      //string password=pass;
      getch();
      //cleanScreen();
      for (int i = 0; i < usuarios.size(); i++) {
        if((usuario==usuarios[i]->getUser()) && (password==usuarios[i]->getPassword())){
          /*cleanScreen();
          mvprintw(20,15,"Entro");
          getch();*/
          if (dynamic_cast<Administrador*>(usuarios[i])){//Administrador login
            cleanScreen();
            mvprintw(20,15,"Entro Admin");
            getch();
          } //fin Administrador login


          break;
        }else{
          cleanScreen();
          mvprintw(5, 10, "Usuario y Contraseña Incorrectos");
          getch();
        }
        break;
      }
    }//fin login in
    else if (opcion[0]=='3'){//salir
      cleanScreen();
      libre=true;
      mvprintw(5,20,"Gracias por entrar al sistema");
    }//fin salir
    else{
      //cleanScreen();
      mvprintw(5, 10, "Opcion no valida, intente de nuevo...");
      getch();
    }
    cleanScreen();
  }//fin while


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
