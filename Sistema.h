#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <vector>
#include "Usuario.h"
#include "Productos.h"
#include <fstream>

#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema{
  private:
    vector<Usuario*> usuarios;
    vector<Productos*> productos;
    ofstream archivo1;
    ofstream archivo2;


  public:
    Sistema();
    void run();
    void cleanScreen();
    /*vector<Usuario*>& getUsuarios();
		void setUsuarios(Usuario*);*/

};


#endif /* end of include guard:  */
