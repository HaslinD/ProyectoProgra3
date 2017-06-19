bool salir=false;
while(!salir){
  mvprintw(2, 10, " BIENVENIDO ADMINISTRADOR ");
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
            //TODO: falta en archivos y agregarlo en vector
          }
          else if (op[0]=='2'){//pepsi
            cleanScreen();
            mvprintw(6,20,"Ingrese precio: ");
            char price[9];
            getstr(price);
            string precio = static_cast<char*>(price);
            mvprintw(7,20,"Ingrese codigo: ");
            char cod[9];
            getstr(cod);
            string codigo = static_cast<char*>(cod);
            //TODO: falta en archivos y agregarlo en vector
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
      }
      else if (res=="3"){//frutas

      }
      else if (res=="4"){//Heladeria

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

  }//fin Modificar
  else if (opcion[0]=='3'){//eliminar
    cleanScreen();
  }//fin eliminar
  else if (opcion[0]=='4'){//salir
    cleanScreen();
    salir=true;
    mvprintw(5,20,"Gracias por entrar al sistema");
    getch();
  } else{
    cleanScreen();
    mvprintw(5,20,"Opcion no valida, intente de nuevo...");
    getch();
  }
  cleanScreen();
}
