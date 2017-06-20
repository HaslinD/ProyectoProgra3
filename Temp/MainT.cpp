#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Factura.h"
#include "Venta.h"


using namespace std;

int menu();


int main(){
    vector<string> vect;
    ofstream Fact;
	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{
                Factura fc = new Venta();
                Fact.open("Factura.txt", ios::app);

                Fact << fc.Lugar() << endl;   
                Fact << fc.Fecha() << endl;
                Fact << fc.Nombreapellido() << endl;
                Fact << fc.Numidentificacion() << endl;
                Fact << fc.Domicilio() << endl;
                Fact << "# " << "   Nombre   " << "   Precio  " << endl; 
                
                for (int i = 0; i < fc.getObjetos().size(); ++i)
                {
                    Fact << i << endl;
                }

               	break;}

	       	case 3:
	           	salir = true;
	           	break;
	    }
	}
    return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Factura" << endl
             << "2.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 3)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}