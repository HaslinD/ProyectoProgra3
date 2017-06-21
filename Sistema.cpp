#include <ncurses.h>
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
#include "Pepsi.h"
#include "Productos.h"
#include "CocaCola.h"
#include "Cerdo.h"
#include "Res.h"
#include "Pera.h"
#include "Manzana.h"
#include "Cono.h"
#include "Sundae.h"
#include <typeinfo>
//#include "Productos.h"



using namespace std;

Sistema::Sistema(){

}


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
      cleanScreen();
      int tipo;
      for (int i = 0; i < usuarios.size(); i++) {
        if((usuario==usuarios[i]->getUser()) && (password==usuarios[i]->getPassword())){
          if (dynamic_cast<Administrador*>(usuarios[i])){//Administrador login
            tipo=1;
          } //fin Administrador login
          else if (dynamic_cast<Vendedor*>(usuarios[i])){//Vendedor login
            tipo=2;
          }
          //break;
        }else{
          cleanScreen();
          mvprintw(5, 10, "Usuario y Contraseña Incorrectos");
          getch();
        }
        break;
      }
      if (tipo==1){//Administrador
        bool salir=false;
        while(!salir){
          mvprintw(2, 10, "BIENVENIDO ADMINISTRADOR ");
          mvprintw(4, 10, "Que Desea Hacer? ");
          mvprintw(5, 10, "[1]. Agregar Inventario");
          mvprintw(6, 10, "[2]. Modificar Inventario");
          mvprintw(7, 10, "[3]. Eliminar Inventario");
          mvprintw(8, 10, "[4]. Salir");
          mvprintw(9, 10, "ELIGA LA OPCION: ");
          char opcion[1];
          getstr(opcion);
          getch();
          //cleanScreen();

          if(opcion[0]=='1'){//agregar
            cleanScreen();
            bool val=false;
            while(!val){
              mvprintw(2, 10, "Que desea Agregar ");
              mvprintw(3, 10, "[1]. Bebidas");
              mvprintw(4, 10, "[2]. Carnes");
              mvprintw(5, 10, "[3]. Frutas");
              mvprintw(6, 10, "[4]. Heladeria");
              mvprintw(7, 10, "[5]. Herramientas");
              mvprintw(8, 10, "[6]. Jugueteria");
              mvprintw(9, 10, "[7]. Licores");
              mvprintw(10, 10, "[8]. Limpieza");
              mvprintw(11, 10, "[9]. Mariscos");
              mvprintw(12, 10, "[10]. Pan");
              mvprintw(13, 10, "[11]. Verduras");
              mvprintw(14, 10, "[12]. Salir");
              mvprintw(15, 10, "ELIGA LA OPCION: ");
              char respuesta[1];
              getstr(respuesta);
              string res = static_cast<char*>(respuesta);
              getch();
              //cleanScreen();
              if (res=="1"){//bebidas
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Coca Cola");
                  mvprintw(7,20,"[2]. Pepsi");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//coca-cola
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* bedi=new CocaCola(codigo,precio,"CocaCola");
                    productos.push_back(bedi);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//pepsi
                    cleanScreen();
                    mvprintw(6,20,"Ingrese Precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese Código: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* bedi=new Pepsi(codigo,precio,"Pepsi");
                    productos.push_back(bedi);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='3'){//salir
                    cleanScreen();
                    libre=true;
                  }else{
                    cleanScreen();
                    mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                    getch();
                  }
                  cleanScreen();
                }

                getch();
              }
              else if (res=="2"){//carnes
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Cerdo");
                  mvprintw(7,20,"[2]. Res");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Cerdo
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* carne=new Cerdo(codigo,precio,"Cerdo");
                    productos.push_back(carne);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//res
                    cleanScreen();
                    mvprintw(6,20,"Ingrese Precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese Código: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* carne=new Res(codigo,precio,"Res");
                    productos.push_back(carne);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='3'){//salir
                    cleanScreen();
                    libre=true;
                  }else{
                    cleanScreen();
                    mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                    getch();
                  }
                  cleanScreen();
                }

                getch();
              }
              else if (res=="3"){//frutas
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Pera");
                  mvprintw(7,20,"[2]. Manzana");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//pera
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* fruta=new Pera(codigo,precio,"Pera");
                    productos.push_back(fruta);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//manzana
                    cleanScreen();
                    mvprintw(6,20,"Ingrese Precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese Código: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* fruta=new Manzana(codigo,precio,"Manzana");
                    productos.push_back(fruta);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='3'){//salir
                    cleanScreen();
                    libre=true;
                  }else{
                    cleanScreen();
                    mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                    getch();
                  }
                  cleanScreen();
                }

                getch();

              }
              else if (res=="4"){//Heladeria
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Cono");
                  mvprintw(7,20,"[2]. Sundae");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//cono
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* helado=new Cono(codigo,precio,"Cono");
                    productos.push_back(helado);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Sundae
                    cleanScreen();
                    mvprintw(6,20,"Ingrese Precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese Código: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* helado=new Sundae(codigo,precio,"Sundae");
                    productos.push_back(helado);
                    mvprintw(6,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='3'){//salir
                    cleanScreen();
                    libre=true;
                  }else{
                    cleanScreen();
                    mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                    getch();
                  }
                  cleanScreen();
                }

                getch();

              }
              else if(res=="5"){//Herramientas

              }
              else if(res=="6"){//Jugueteria

              }
              else if (res=="7"){//Licores

              }
              else if (res=="8"){//Limpieza

              }
              else if(res=="9"){//Mariscos

              }
              else if (res=="10"){//pan

              }
              else if(res=="11"){//verduras

              }
              else if (res=="12"){
                cleanScreen();
                val=true;
              }else{
                cleanScreen();
                mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                getch();
              }

              cleanScreen();
            }
          }//fin agregar
          else if(opcion[0]=='2'){//modificar
            cleanScreen();
            bool val=false;
            while(!val){
              mvprintw(2, 10, "Que desea Modificar ");
              mvprintw(3, 10, "[1]. Bebidas");
              mvprintw(4, 10, "[2]. Carnes");
              mvprintw(5, 10, "[3]. Frutas");
              mvprintw(6, 10, "[4]. Heladeria");
              mvprintw(7, 10, "[5]. Herramientas");
              mvprintw(8, 10, "[6]. Jugueteria");
              mvprintw(9, 10, "[7]. Licores");
              mvprintw(10, 10, "[8]. Limpieza");
              mvprintw(11, 10, "[9]. Mariscos");
              mvprintw(12, 10, "[10]. Pan");
              mvprintw(13, 10, "[11]. Verduras");
              mvprintw(14, 10, "[12]. Salir");
              mvprintw(15, 10, "ELIGA LA OPCION: ");
              char respuesta[1];
              getstr(respuesta);
              string res = static_cast<char*>(respuesta);
              getch();
              if (res == "1") { //Mod Bebidas
                for (int i = 0; i < productos.size(); ++i) {
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea Modificar: ");
                  mvprintw(6,20,"[1]. Coca Cola");
                  mvprintw(7,20,"[2]. Pepsi");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (typeid(*productos[i]) == typeid(Bebidas)) {
                    if (op[0]=='1'){//coca-cola
                      cleanScreen();
                      mvprintw(6,20,"Ingrese precio: ");
                      char price[9];
                      getstr(price);
                      string precio = static_cast<char*>(price);
                      mvprintw(7,20,"Ingrese codigo: ");
                      char cod[9];
                      getstr(cod);
                      string codigo = static_cast<char*>(cod);
                      mvprintw(8,20,"seleccione que Bebida Va Modificar: ");
                      char Amod[9];
                      getstr(Amod);
                      string modify = static_cast<char*>(Amod);

                      mvprintw(6,20,"Se ha agregado correctamente: ");
                    }
                    else if (op[0]=='2'){//pepsi
                      cleanScreen();
                      mvprintw(6,20,"Ingrese Precio: ");
                      char price[9];
                      getstr(price);
                      string precio = static_cast<char*>(price);
                      mvprintw(7,20,"Ingrese Código: ");
                      char cod[9];
                      getstr(cod);
                      string codigo = static_cast<char*>(cod);
                      Productos* bedi=new Pepsi(codigo,precio,"Pepsi");
                      productos.push_back(bedi);
                      mvprintw(6,20,"Se ha agregado correctamente: ");
                    }
                    else if (op[0]=='3'){//salir
                      cleanScreen();
                      libre=true;
                    }else{
                      cleanScreen();
                      mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                      getch();
                    }
                    cleanScreen();
                  }
                }

                getch();
                }
              } else if (res == "2") {//Mod Carnes
                
              } else if (res == "3") {//Mod Frutas
                
              } else if (res == "4") {//Mod Heladeria
                
              } else if (res == "5") {//Mod Herramientas
                
              } else if (res == "6") {//Mod Jugueteria
                
              } else if (res == "7") {//Mod Licores
                
              } else if (res == "8") {//Mod Limpieza
                
              } else if (res == "9") {//Mod Mariscos
                
              } else if (res == "10") {//Mod Pan
                
              } else if (res == "11") {//Mod Verduras
                
              } else if (res == "12") {
                cleanScreen();
                val=true;
              }else{
                cleanScreen();
                mvprintw(5,20,"Opcion no valida, intente de nuevo...");
                getch();
              }
              cleanScreen();
            }

          }//fin Modificar
          else if (opcion[0]=='3'){//eliminar
            cleanScreen();
          }//fin eliminar
          else if (opcion[0]=='4'){//salir
            cleanScreen();
            salir=true;
            mvprintw(5,20,"Gracias por entrar al sistema Administrador");
            getch();
          } else{
            cleanScreen();
            mvprintw(5,20,"Opcion no valida, intente de nuevo...");
            getch();
          }
          cleanScreen();
        }
      }//fin Administrador
      if (tipo==2){//Vendedor
        cleanScreen();
        mvprintw(20,15,"Entro Vendedor");
        getch();
      }//fin Vendedor
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
