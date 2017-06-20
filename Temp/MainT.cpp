#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

int menu();
ofstream Factura;

int main(){
    vector<string*> vect;

	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{
                Factura fc = new Venta();
                Factura.open("Factura.txt", ios::app);
                Factura << fc -> Lugar() << endl << Factura -> Fecha() << endl << Factura -> Nombreapellido() << endl << Factura -> Numidentificacion();


                for (int i = 0; i < vect.size(); ++i)
                {
                    
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