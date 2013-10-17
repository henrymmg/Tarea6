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
	SolPos = malloc(15 * sizeof(int));
	SolVel = malloc(15 * sizeof(int));
	return SolPos, SolVel;

}
