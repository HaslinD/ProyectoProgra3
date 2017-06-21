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
#include "Martillo.h"
#include "Lego.h"
#include "Puzzle.h"
#include "Ron.h"
#include "Tequila.h"
#include "Ase.h"
#include "Cloro.h"
#include "Camaron.h"
#include "Pez.h"
#include "Semita.h"
#include "Galletas.h"
#include "Tomate.h"
#include "Pepino.h"
#include "Integer.h"
#include "Venta.h"
#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <fstream>
#include <sstream>
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
    mvprintw(7, 10, "[3]. Calculadora");
    mvprintw(8, 10, "[4]. Salir");
    mvprintw(9, 10, "Ingrese la opcion: ");
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
          archivo1<<"Usuario: "<<usuario<< " Contraseña: "<<contrasena<<endl;
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
          archivo1<<"Usuario: "<<usuario<< " Contraseña: "<<contrasena<<endl;
        }else if (opcion[0]=='3'){
          cleanScreen();
          libre=true;
          archivo1.close();
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
      int tipo=0;
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
        //break;
      }
      if (tipo==1){//Administrador
        bool salir=false;
        while(!salir){
          mvprintw(2, 10, "BIENVENIDO ADMINISTRADOR ");
          mvprintw(4, 10, "Que Desea Hacer? ");
          mvprintw(5, 10, "[1]. Agregar Inventario");
          mvprintw(6, 10, "[2]. Eliminar Inventario");
          mvprintw(7, 10, "[3]. Salir");
          mvprintw(8, 10, "ELIGA LA OPCION: ");
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
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Martillo");
                  mvprintw(7,20,"[2]. Pala");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Martillo
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* herra=new Martillo(codigo,"Martilo",precio);
                    productos.push_back(herra);
                    mvprintw(10,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Pala
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
                    mvprintw(10,20,"Se ha agregado correctamente: ");
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
              else if(res=="6"){//Jugueteria
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Lego");
                  mvprintw(7,20,"[2]. Puzzle");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Lego
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* juguete=new Lego(codigo,"LEGO","LEGO",precio,"LEGO");
                    productos.push_back(juguete);
                    mvprintw(10,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Puzzle
                    cleanScreen();
                    mvprintw(6,20,"Ingrese Precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese Código: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    Productos* juguete=new Puzzle(codigo,"Puzzle","PUZZLE",precio,"PUZZLE");
                    productos.push_back(juguete);
                    mvprintw(10,20,"Se ha agregado correctamente: ");
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
              else if (res=="7"){//Licores
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Ron");
                  mvprintw(7,20,"[2]. Tequila");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//ron
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre del Ron: ");
                    char ron[9];
                    getstr(ron);
                    string name = static_cast<char*>(ron);
                    mvprintw(9,20,"Ingrese Marca del Ron: ");
                    char mar[9];
                    getstr(mar);
                    string marca = static_cast<char*>(mar);

                    mvprintw(10,20,"Ingrese cantidadML del Ron: ");
                    char cant[9];
                    getstr(cant);
                    string cantidad = static_cast<char*>(cant);
                    Productos* licor=new Ron(codigo,name,marca,precio,cantidad);
                    productos.push_back(licor);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Tequila
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre del Ron: ");
                    char ron[9];
                    getstr(ron);
                    string name = static_cast<char*>(ron);
                    mvprintw(9,20,"Ingrese Marca del Ron: ");
                    char mar[9];
                    getstr(mar);
                    string marca = static_cast<char*>(mar);

                    mvprintw(10,20,"Ingrese cantidadML del Ron: ");
                    char cant[9];
                    getstr(cant);
                    string cantidad = static_cast<char*>(cant);
                    Productos* licor=new Tequila(codigo,name,marca,precio,cantidad);
                    productos.push_back(licor);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
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
              else if (res=="8"){//Limpieza
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Ase");
                  mvprintw(7,20,"[2]. Cloro");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Ase
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese tipo: ");
                    char tip[9];
                    getstr(tip);
                    string tipo = static_cast<char*>(tip);
                    Productos* limpio=new Ase(codigo,precio,tipo);
                    productos.push_back(limpio);
                    mvprintw(10,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Cloro
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese tipo: ");
                    char tip[9];
                    getstr(tip);
                    string tipo = static_cast<char*>(tip);
                    Productos* limpio=new Cloro(codigo,precio,tipo);
                    productos.push_back(limpio);
                    mvprintw(10,20,"Se ha agregado correctamente: ");
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
              else if(res=="9"){//Mariscos
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Camaron");
                  mvprintw(7,20,"[2]. Pez");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Camaron
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese Peso: ");
                    char pes[9];
                    getstr(pes);
                    string peso = static_cast<char*>(pes);
                    Productos* mari=new Camaron(codigo,name,precio,peso);
                    productos.push_back(mari);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Pez
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese Peso: ");
                    char pes[9];
                    getstr(pes);
                    string peso = static_cast<char*>(pes);
                    Productos* mari=new Pez(codigo,name,precio,peso);
                    productos.push_back(mari);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
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
              else if (res=="10"){//pan
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Semita");
                  mvprintw(7,20,"[2]. Galletas");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Semita
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese estado: ");
                    char es[9];
                    getstr(es);
                    string estado = static_cast<char*>(es);
                    mvprintw(10,20,"Ingrese tipo: ");
                    char tip[9];
                    getstr(tip);
                    string tipo = static_cast<char*>(tip);
                    mvprintw(11,20,"Ingrese fecha de Vencimiento: ");
                    char date[12];
                    getstr(date);
                    string fecha = static_cast<char*>(date);
                    Productos* pan=new Semita(codigo,name,estado,precio,tipo,fecha);
                    productos.push_back(pan);
                    mvprintw(13,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Galletas
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese estado: ");
                    char es[9];
                    getstr(es);
                    string estado = static_cast<char*>(es);
                    mvprintw(10,20,"Ingrese tipo: ");
                    char tip[9];
                    getstr(tip);
                    string tipo = static_cast<char*>(tip);
                    mvprintw(11,20,"Ingrese fecha de Vencimiento: ");
                    char date[12];
                    getstr(date);
                    string fecha = static_cast<char*>(date);
                    Productos* pan=new Galletas(codigo,name,estado,precio,tipo,fecha);
                    productos.push_back(pan);
                    mvprintw(13,20,"Se ha agregado correctamente: ");
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
              else if(res=="11"){//verduras
                cleanScreen();
                bool libre=false;
                while(!libre){
                  mvprintw(5,20,"Cual desea agregar: ");
                  mvprintw(6,20,"[1]. Tomate");
                  mvprintw(7,20,"[2]. Pepino");
                  mvprintw(8,20,"[3]. Salir");
                  mvprintw(9,20,"Ingrese Opcion: ");
                  char op[1];
                  getstr(op);
                  if (op[0]=='1'){//Tomate
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese cantidad: ");
                    char pes[9];
                    getstr(pes);
                    string cantidad = static_cast<char*>(pes);
                    Productos* verdura=new Tomate(codigo,name,precio,cantidad);
                    productos.push_back(verdura);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
                  }
                  else if (op[0]=='2'){//Pepino
                    cleanScreen();
                    mvprintw(6,20,"Ingrese precio: ");
                    char price[9];
                    getstr(price);
                    string precio = static_cast<char*>(price);
                    mvprintw(7,20,"Ingrese codigo: ");
                    char cod[9];
                    getstr(cod);
                    string codigo = static_cast<char*>(cod);
                    mvprintw(8,20,"Ingrese Nombre: ");
                    char nome[9];
                    getstr(nome);
                    string name = static_cast<char*>(nome);
                    mvprintw(9,20,"Ingrese cantidad: ");
                    char pes[9];
                    getstr(pes);
                    string cantidad = static_cast<char*>(pes);
                    Productos* verdura=new Pepino(codigo,name,precio,cantidad);
                    productos.push_back(verdura);
                    mvprintw(12,20,"Se ha agregado correctamente: ");
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

          else if(opcion[0]=='2'){//eliminar
              cleanScreen();
              mvprintw(5,20,"Ingrese la posicion del vector que desea eliminar: ");
              char pos[1];
              getstr(pos);
              int posicion=atoi(pos);
              productos.erase(productos.begin()+posicion);
              mvprintw(5,20,"Se ha eliminado correctamente");
          }//fin eliminar
          else if (opcion[0]=='3'){//salir
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
        bool val = false;
        mvprintw(2, 10, "HA INGRESADO COMO VENDEDOR ");
        mvprintw(4, 10, "Que Desea Hacer? ");
        mvprintw(5, 10, "[1]. Vender");
        mvprintw(6, 10, "[2]. Hacer Una Factura");
        mvprintw(7, 10, "[3]. Salir");
        mvprintw(8, 10, "ELIGA LA OPCION: ");
        char respuesta[1];
        getstr(respuesta);
        string res = static_cast<char*>(respuesta);
        getch();
        if (res == "1") {//Venta de Objetos
          cleanScreen();
          mvprintw(6,20,"Ingrese lugar de Compra: ");
          char lug[9];
          getstr(lug);
          string lugar = static_cast<char*>(lug);
          mvprintw(7,20,"Ingrese Fecha de Compra: ");
          char fech[9];
          getstr(fech);
          string fecha = static_cast<char*>(fech);
          mvprintw(9,20,"Ingrese Nombre del Comprador: ");
          char nom[9];
          getstr(nom);
          string nombre = static_cast<char*>(nom);
          mvprintw(10,20,"Ingrese Identidad del Comprador: ");
          char id[9];
          getstr(id);
          string identificacion = static_cast<char*>(id);
          mvprintw(11,20,"Ingrese Domicilio: ");
          char dom[9];
          getstr(dom);
          string domicilio = static_cast<char*>(dom);
          Factura* ventatodo=new Venta(lugar, fecha, "23", nombre, identificacion, domicilio);
          facturas.push_back(ventatodo);
          int vnta;
          do {
            cleanScreen();
            mvprintw(6,20,"Que desea Comprar [0] para salir: ");
            char vent[9];
            getstr(vent);
            vnta = atoi(vent);
            compra.push_back(productos.at(vnta));
          } while (vnta > 0 && vnta < productos.size());
          cleanScreen();

        } else if (res == "2") {// Facturacion
          Venta* ventatodo;
          Fact.open("Factura.txt", ios::app);

          Fact << ventatodo -> Lugar() << endl;
          Fact << ventatodo -> Fecha() << endl;
          Fact << ventatodo -> Nombreapellido() << endl;
          Fact << ventatodo -> Numidentificacion() << endl;
          Fact << ventatodo -> Domicilio() << endl;
          //Fact << "# " << "   Nombre   " << "   Precio  " << endl;
          /*for (int i = 0; i < compra.size(); ++i) {
            Fact << i << compra.at(i) << endl;
          }*/
          Fact << "Gracias Por Su Compra" << endl;

        } else if (res == "3") {
          cleanScreen();
            val=true;
            mvprintw(5,20,"Gracias por entrar al sistema Vendedor");
            getch();
          } else{
            cleanScreen();
            mvprintw(5,20,"Opcion no valida, intente de nuevo...");
            getch();
        }

        cleanScreen();
        //mvprintw(20,15,"Entro Vendedor");
        //getch();
      }//fin Vendedor
    }//fin login in
    else if (opcion[0]=='3'){//Calculadora
      bool salir=false;
      while(!salir){
        mvprintw(4, 10, "Que Desea Hacer? ");
        mvprintw(5, 10, "[1]. Suma");
        mvprintw(6, 10, "[2]. Resta");
        mvprintw(7, 10, "[3]. Salir");
        mvprintw(8, 10, "ELIGA LA OPCION: ");
        char opcion[1];
        getstr(opcion);
        getch();
        if (opcion[0]=='1'){//suma
          cleanScreen();
          int num1,num2,total;
          mvprintw(4, 10, "Ingrese numero 1: ");
          char numero1[9];
          getstr(numero1);
          num1=atoi(numero1);
          Integer* t1=new Integer(num1);
          mvprintw(5, 10, "Ingrese numero 2: ");
          char numero2[9];
          getstr(numero2);
          num2=atoi(numero2);
          Integer* t2=new Integer(num2);
          Integer* temp = *t1+t2;
          total=temp->getValue();
          string str;
          ostringstream tem;
          tem<<total;
          str=tem.str();
          char const *pchar = str.c_str();
          mvprintw(6, 10, "Total: ");
          mvprintw(7, 10, pchar);
          getch();
        }else if (opcion[0]=='2'){//resta
          cleanScreen();
          int num1,num2,total;
          mvprintw(4, 10, "Ingrese numero 1: ");
          char numero1[9];
          getstr(numero1);
          num1=atoi(numero1);
          Integer* t1=new Integer(num1);
          mvprintw(5, 10, "Ingrese numero 2: ");
          char numero2[9];
          getstr(numero2);
          num2=atoi(numero2);
          Integer* t2=new Integer(num2);
          Integer* temp = *t1-t2;
          total=temp->getValue();
          string str;
          ostringstream tem;
          tem<<total;
          str=tem.str();
          char const *pchar = str.c_str();
          mvprintw(6, 10, "Total: ");
          mvprintw(7, 10, pchar);
          getch();

        }else if (opcion[0]=='3'){
          cleanScreen();
          salir=true;
          mvprintw(5,20,"Gracias por entrar");
          getch();
        }
        else{
          cleanScreen();
          mvprintw(5,20,"Opcion no valida, intente de nuevo...");
          getch();
        }
        cleanScreen();
      }
    }
    else if (opcion[0]=='4'){//salir
      cleanScreen();
      mvprintw(5,20,"Gracias por entrar al sistema");
      libre=true;

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
