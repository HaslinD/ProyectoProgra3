#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <vector>
#include "Usuario.h"
#include "Productos.h"
#include "Factura.h"
#include <fstream>

#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema{
  private:
    vector<Usuario*> usuarios;
    vector<Productos*> productos;
    vector<Factura*> facturas;
    vector<Productos*> compra;
    ofstream archivo1;
    ofstream archivo2;
    ofstream Fact;


  public:
    Sistema();
    void run();
    void cleanScreen();
    /*vector<Usuario*>& getUsuarios();
		void setUsuarios(Usuario*);*/

};


#endif /* end of include guard:  */
