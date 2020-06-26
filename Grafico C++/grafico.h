#include <graphics.h>
#include <math.h>

void estrutura(){
	setcolor(WHITE);
	rectangle(10,10,780,580);
}

void eje(){
	setcolor(DARKGRAY);
	line(390,10,390,580);
	line(10,290,780,290);

	for(int i=10;i<580;i+=10){
		setcolor(DARKGRAY);
		line(387,i,390,i);
	}

	for(int i=10;i<780;i+=10){
		setcolor(DARKGRAY);
		line(i,287,i,293);
	}
}

void graficoSeno(double cordenaX){
	double xd[2000];
	int cont=0;
	double x1, y1, x2, y2;

	for(double x=0.39; x<780; x+= 0.39){
		xd[cont]=sin(x);
		cont+=1;
	}

	cont=1;

	for(double xa1=0.39; xa1<780; xa1+=0.39){

		x1=((xa1-0.39)*(780/cordenaX*2))*0.089;
		y1=(xd[cont-1]*190)+300;
		x2=xa1*(780/cordenaX*2)*0.089;
		y2=(xd[cont]*190)+300;

		setcolor(BLUE);
		line((float)x1, (float)y1, (float)x2, (float)y2);
		cont+=1;
	}
}



















