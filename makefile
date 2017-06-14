
Main: Main.o Bebidas.o Carnes.o Frutas.o Heladeria.o Herramientas.o Jugueteria.o Licores.o Limpieza.o Mariscos.o Pan.o Verduras.o
	g++ Main.o Bebidas.o Carnes.o Frutas.o Heladeria.o Herramientas.o Jugueteria.o Licores.o Limpieza.o Mariscos.o Pan.o Verduras.o -o Main

Main.o: Main.cpp Bebidas.h Carnes.h Frutas.h Heladeria.h Herramientas.h Jugueteria.h
	g++ -c Main.cpp

Bebidas.o: Bebidas.h Bebidas.cpp
	g++ -c Bebidas.cpp

Carnes.o: Carnes.h Carnes.cpp
	g++ -c Carnes.cpp

Frutas.o: Frutas.h Frutas.cpp
	g++ -c Frutas.cpp

Heladeria.o: Heladeria.h Heladeria.cpp
	g++ -c Heladeria.cpp

Herramientas.o: Herramientas.h Herramientas.cpp
	g++ -c Herramientas.cpp

Jugueteria.o: Jugueteria.h Jugueteria.cpp
	g++ -c Jugueteria.cpp

Licores.o: Licores.h Licores.cpp
	g++ -c Licores.cpp

Limpieza.o: Limpieza.h Limpieza.cpp
	g++ -c Limpieza.cpp

Mariscos.o: Mariscos.h Mariscos.cpp
	g++ -c Mariscos.cpp

Pan.o: Pan.h Pan.cpp
	g++ -c Pan.cpp

Verduras.o: Verduras.h Verduras.cpp
	g++ -c Verduras.cpp

clean:
	rm -f *.o Main
