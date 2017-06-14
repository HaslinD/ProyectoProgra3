#include <ncurses.h>
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <vector>
#include "Usuario.h"

#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema{
  private:
    vector<Usuario*> usuarios;

  public:
    Sistema();
    void run();
    void cleanScreen();
    vector<Usuario*>& getUsuarios();
		void setUsuarios(Usuario*);

};


#endif /* end of include guard:  */
