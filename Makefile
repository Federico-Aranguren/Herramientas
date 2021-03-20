all: Sumatoria.pdf

Sumatorias.x: Sumatorias.cpp
	g++ Sumatorias.cpp -o Sumatorias.x

datos.txt: Sumatorias.x
	./Sumatorias.x 1000 > datos.txt

Sumatoria.pdf: Sumatorias.gp datos.txt
	gnuplot Sumatorias.gp

clean:
	rm -f Sumatorias.x datos.txt
