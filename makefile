Main: Main.o Productos.o Bebidas.o Pepsi.o CocaCola.o Carnes.o Cerdo.o Res.o Frutas.o Pera.o Manzana.o Heladeria.o Cono.o Sundae.o Herramientas.o Martillo.o Pala.o Jugueteria.o Lego.o Puzzle.o Licores.o Ron.o Tequila.o Limpieza.o Ase.o Cloro.o Mariscos.o Pez.o Camaron.o Pan.o Galletas.o Semita.o Verduras.o Pepino.o Tomate.o Sistema.o Factura.o Pedido.o Venta.o Usuario.o Administrador.o Vendedor.o Integer.o
		g++ Main.o Productos.o Bebidas.o Pepsi.o CocaCola.o Carnes.o Cerdo.o Res.o Frutas.o Pera.o Manzana.o Heladeria.o Cono.o Sundae.o Herramientas.o Martillo.o Pala.o Jugueteria.o Lego.o Puzzle.o Licores.o Ron.o Tequila.o Limpieza.o Ase.o Cloro.o Mariscos.o Pez.o Camaron.o Pan.o Galletas.o Semita.o Verduras.o Pepino.o Tomate.o Sistema.o Factura.o Pedido.o Venta.o Usuario.o Administrador.o Vendedor.o Integer.o -o Main -lncurses

Main.o: Sistema.h Main.cpp
	g++ -c Main.cpp

Sistema.o: Sistema.h Usuario.h Productos.h Sistema.cpp Sistema.h Usuario.h Bebidas.h Carnes.h Frutas.h Heladeria.h Herramientas.h Jugueteria.h Licores.h Limpieza.h Mariscos.h Pan.h Verduras.h Administrador.h Vendedor.h Pepsi.h Productos.h CocaCola.h Cerdo.h Res.h Pera.h Manzana.h Cono.h Sundae.h Martillo.h Lego.h Puzzle.h Ron.h Tequila.h Ase.h Cloro.h Camaron.h Pez.h Semita.h Galletas.h Tomate.h Pepino.h
	g++ -c Sistema.cpp

Productos.o: Productos.h Productos.cpp
	g++ -c Productos.cpp

Integer.o: Integer.h Integer.cpp
	g++ -c Integer.cpp
	
Bebidas.o: Productos.h Bebidas.h Bebidas.cpp
	g++ -c Bebidas.cpp

CocaCola.o: Bebidas.h CocaCola.h CocaCola.cpp
	g++ -c CocaCola.cpp

Pepsi.o: Bebidas.h Pepsi.h Pepsi.cpp
	g++ -c Pepsi.cpp

Carnes.o: Carnes.h Carnes.cpp
	g++ -c Carnes.cpp

Cerdo.o: Carnes.h Cerdo.h Cerdo.cpp
	g++ -c Cerdo.cpp

Res.o: Carnes.h Res.h Res.cpp
	g++ -c Res.cpp

Frutas.o: Frutas.h Frutas.cpp
	g++ -c Frutas.cpp

Pera.o: Frutas.h Pera.h Pera.cpp
	g++ -c Pera.cpp

Manzana.o: Frutas.h Manzana.h Manzana.cpp
	g++ -c Manzana.cpp

Heladeria.o: Heladeria.h Heladeria.cpp
	g++ -c Heladeria.cpp

Cono.o: Heladeria.h Cono.h Cono.cpp
	g++ -c Cono.cpp

Sundae.o: Heladeria.h Sundae.h Sundae.cpp
	g++ -c Sundae.cpp

Herramientas.o: Herramientas.h Herramientas.cpp
	g++ -c Herramientas.cpp

Martillo.o: Herramientas.h Martillo.h Martillo.cpp
	g++ -c Martillo.cpp

Pala.o: Herramientas.h Pala.h Pala.cpp
	g++ -c Pala.cpp

Jugueteria.o: Jugueteria.h Jugueteria.cpp
	g++ -c Jugueteria.cpp

Lego.o: Jugueteria.h Lego.h Lego.cpp
	g++ -c Lego.cpp

Puzzle.o: Jugueteria.h Puzzle.h Puzzle.cpp
	g++ -c Puzzle.cpp

Licores.o: Licores.h Licores.cpp
	g++ -c Licores.cpp

Ron.o: Licores.h Ron.h Ron.cpp
	g++ -c Ron.cpp

Tequila.o: Licores.h Tequila.h Tequila.cpp
	g++ -c Tequila.cpp

Limpieza.o: Limpieza.h Limpieza.cpp
	g++ -c Limpieza.cpp

Ase.o: Limpieza.h Ase.h Ase.cpp
	g++ -c Ase.cpp

Cloro.o: Limpieza.h Cloro.h Cloro.cpp
	g++ -c Cloro.cpp

Mariscos.o: Mariscos.h Mariscos.cpp
	g++ -c Mariscos.cpp

Pez.o: Mariscos.h Pez.h Pez.cpp
	g++ -c Pez.cpp

Camaron.o: Mariscos.h Camaron.h Camaron.cpp
	g++ -c Camaron.cpp

Pan.o: Pan.h Pan.cpp
	g++ -c Pan.cpp

Galletas.o: Pan.h Galletas.h Galletas.cpp
	g++ -c Galletas.cpp

Semita.o: Pan.h Semita.h Semita.cpp
	g++ -c Semita.cpp

Verduras.o: Verduras.h Verduras.cpp
	g++ -c Verduras.cpp

Pepino.o: Verduras.h Pepino.h Pepino.cpp
	g++ -c Pepino.cpp

Tomate.o: Verduras.h Tomate.h Tomate.cpp
	g++ -c Tomate.cpp

Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp

Administrador.o: Usuario.h Administrador.h Administrador.cpp
	g++ -c Administrador.cpp

Vendedor.o: Usuario.h Vendedor.h Vendedor.cpp
	g++ -c Vendedor.cpp

Factura.o: Factura.h Factura.cpp
	g++ -c Factura.cpp

Pedido.o: Factura.h Pedido.h Pedido.cpp
	g++ -c Pedido.cpp

Venta.o: Factura.h Factura.cpp
	g++ -c Venta.cpp

clean:
	rm -f *.o Main
