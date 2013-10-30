/*
*
* Created on: Aug 19, 2013
* Autores:
* David Andres Davila
* Henry Mauricio Martinez
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double *Resolver (double pix, double piy, double vix, double viy);
float Primera_derivada(float x, float y_1, float y_2);
float Segunda_derivada(float x, float y_1, float y_2);
*float RungeKuttaCuartoOrden(float x_viejo, float y_1_viejo, float y_2_viejo);

int main (int argc, char *argv[])
{
/*
*Metodo principal del programa, llama a las otras funciones y metodos. Genera cinco archivos de texto con los datos de cada orbita
*Entradas: -argc: tamanio del vector de parametros
*-*argv[]: es el vector de parametros, con el archivo de posicions generado en el primer programa
*Salidas: -0
*/
	FILE *Aentrada;
	FILE *archivo1;
	FILE *archivo2;
	FILE *archivo3;
	FILE *archivo4;
	FILE *archivo5;
	Resolver(0.0,0.0,0.0,0.0);

	return 0;
}


double *Resolver (double pix, double piy, double vix, double viy)
{
/*
*Metodo para resolver la ecuacion diferencial de segundo orden para una particula orbitando el centro de la galaxia
*Entradas: -pix: posicion inicial en x (condicion inicial)
*-piy: posicion inicial en y (condicion inicial)
*-vix: velocidad inicial en x (condicion inicial)
*-viy: velocidad inicial en y (condicion inicial)
*Salidas: -*SolPos: vector con las posiciones de los puntos segun el tiempo
*-*SolVel: vector con las velocidades en x y en y de los puntosde la orbita 
*/
	double *SolPos;
	double *SolVel;
	SolPos = malloc(15 * sizeof(float));
	SolVel = malloc(15 * sizeof(float));
	return SolPos, SolVel;

}

float Primera_derivada(float x, float y_1, float y_2)
{
	return y_2;
}
float Segunda_derivada(float x, float y_1, float y_2)
{
	float derivada;
	derivada = 6.67*1.99*(10^19)/(x^2);
	return derivada
}
*float RungeKuttaCuartoOrden(float h, float x_viejo, float y_1_viejo, float y_2_viejo)
{
	float k_11;
	float k_21;
	float k_31;
	float k_41;

	float k_12;
	float k_22;
	float k_32;
	float k_42;

	float k1_prom;
	float k2_prom;

	float y_1_prima;
	float y_2_prima;

	float x1;
	float x2;
	float x3;

	float y11;
	float y12;
	float y13;

	float y21;
	float y22;
	float y23;

	float *valores[3]

	y_1_prima = Primera_derivada(x_viejo,y_1_viejo,y_2_viejo);
	y_2_prima = Segunda_derivada(x_viejo,y_1_viejo,y_2_viejo);

	k_11 = Primera_derivada(x_viejo,y_1viejo,y_2_viejo);
	k_12 = Segunda_derivada(x_viejo,y_1_viejo,y_2_viejo);
	

	x1 = x_viejo + (h/2.0);
	y11 = y_1_viejo + ((h/2.0)*k_11);
	y12 = y_2_viejo + ((h/2.0)*k_12);

	k_21 = Primera_derivada(x1,y11,y12);
	k_22 = Segunda_derivada(x1,y11,y12);
	
	x2 = x_viejo + (h/2.0);
	y21 = y_1_viejo + ((h/2.0)*k_21);
	y22 = y_2_viejo + ((h/2.0)*k_22);

	k_31 = Primera_derivada(x2,y21,y22);
	k_32 = Segunda_derivada(x2,y21,y22);

	x3 = x_viejo + (h/2.0);
	y31 = y_1_viejo + ((h/2.0)*k_31);
	y32 = y_2_viejo + ((h/2.0)*k_32);

	k_41 = Primera_derivada(x3,y31,y32);
	k_42 = Segunda_derivada(x3,y31,y32);

	k1_prom = (1.0/6.0)*(k11 + 2.0*k21 + 2.0*k31 + k41);
	k2_prom = (1.0/6.0)*(k12 + 2.0*k22 + 2.0*k32 + k42);

	valores[0] = x_viejo + h;
	valores[1] = y_1_viejo + (h*k1_prom);
	valores[2] = y_2_viejo + (h*k2_prom);

	return valores;

}
