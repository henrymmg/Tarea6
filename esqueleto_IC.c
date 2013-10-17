/*
*
* Created on: Aug 19, 2013
* Autores:
* David Andres Davila
* Henry Mauricio Martinez
*/


 /*Para el punto 4 basta con usar este mismo programa 2 veces*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double *PosicionesOrbita (int r);
double *VelocidadesOrbita (int r);

int main (int argc, char *argv[])
{
/*
*Metodo principal del programa, llama a las otras funciones y mètodos. Genera un archivo con los datos de posiciones y velocidades de la galaxia
*Entradas: -argc: tamanio del vector de parametros
*-*argv[]: es el vector de parametros, con las posiciones y velocidades inicales del centro de la galaxia
*Salidas: -0
*/
	FILE *archivo;
	int radio;
	double *Posi;
	double *Velo;
	Posi = PosicionesOrbita(radio);
	Velo = VelocidadesOrbita(radio);
	return 0;
}

double *PosicionesOrbita (int r)
{
/*
*Metodo para calcular las posiciones de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Posiciones: vector con las coordenadas en x y en y (asumiendo que el centro de la galaxia esta en el origen) de los puntos de la orbita (para el punto i su coordenada en x es la entrada 2*i y su coordenada en y es la entrada 2*i + 1)
*/
	double *Posiciones;
	int puntos;
	int total;
	if(r == 10)
	{
		puntos = r;
	}
	else
	{
		puntos = r;
	}
	total = 2*puntos;
	Posiciones = malloc(total * sizeof(int));
	return Posiciones;

}

double *VelocidadesOrbita (int r)
{
/*
*Metodo para calcular las velocidades de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Velocidades: vector con las velocidades en x y en y de los puntos de la orbita (para el punto i su velocidad en x es la entrada 2*i y su velocidad en y es la entrada 2*i + 1)
*/
	double *Posiciones;
	int puntos;
	int total;
	if(r == 10)
	{
		puntos = r;
	}
	else
	{
		puntos = r;
	}
	total = 2*puntos;
	Posiciones = malloc(total * sizeof(int));
	return Posiciones;

}
