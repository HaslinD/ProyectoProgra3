#include <iostream>
#include <string>
#include <ncurses.h>
//#include "Usuario.h"
#include "Sistema.h"

using namespace std;

int main(){
    /*Usuario* user= new Usuario("1234", "Josue");*/
    Sistema sistema;
    /*sistema.getUsuarios().push_back(user);*/
    sistema.run();

     return 0;
}
