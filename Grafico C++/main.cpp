#include <iostream>
#include "graphics.h"
#include "grafico.h"

using namespace std;

int main(int argc, char** argv) {


	initwindow(800,600);

	estrutura();
	eje();
	graficoSeno(5);

	getch();

	return 0;
}
