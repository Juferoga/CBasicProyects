#include <bits/stdc++.h>

using namespace std;

double perimetro(double lado1,double lado2,double lado3);
double area(double semiperimetro,double distanciaAB,double ditanciaBC,double distanciaCA );
double Semiperimetro(double distanciaAB,double distanciaBC, double distanciaCA);
void moverpunto(int x,int y);
double distancia_entre_puntos(int PuntoA[2],int PuntoB[2]);

int punto1[2] ;	// Primer punto 
//   Asignacion de valor en x,y 
int punto2[2] ;	// Segundo punto  
int punto3[2] ;	// Tercer punto


int main(){

//   Asignacion de valor en x,y 
punto1[0]=380/2;
punto1[1]=20;
//
//
punto2[0]=(380/2)/2;
punto2[1]=70;
//
//
punto3[0]=((380/2)/2)+(380/2);
punto3[1]=70;
//





}

double perimetro(double lado1,double lado2,double lado3){
	double Perimetro= lado1+lado2+lado3;
	return Perimetro;
}


double area(){
	double Area;
	Area= sqrt(semiperimetro*(semiperimetro-distanciaAB)*(semiperimetro-distanciaBC)*(semiperimetro-distanciaCA));
	return Area;
}

double distancia_entre_puntos(int PuntoA[2],int PuntoB[2]){
	double Distancia = sqrt  ( (pow(PuntoA[0]-PuntoB[0],2))+(pow(PuntoA[1]-PuntoB[1],2)));
	return Distancia;
}

double Semiperimetro(double distanciaAB,double distanciaBC, double distanciaCA){
	double semiperimetro = (distanciaAB+distanciaBC+distanciaCA)/2 ;
	return semiperimetro;
}

void moverpunto(int x , int y, int numerodelpunto){
	switch (numerodelpunto)
	{
		case 1:
			punto1[0]= x;
			punto1[1]= y;
			break;
		case 2:
			punto2[0]= x;
			punto2[1]= y;
			break;
		case 3: 
			punto3[0]= x;
			punto3[1]= y;
			break;

	}
} 
