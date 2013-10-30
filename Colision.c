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


int main(int argc, char *argv[])
{
/*
*Metodo principal del programa, llama a las otras funciones y mètodos. Modela la colision de dos galaxias, tomando como entrada las condiciones iniciales de ambas.
*Entradas: -argc: tamanio del vector de parametros
*-*argv[]: es el vector de parametros, con las posiciones y velocidades inicales del centro de las galaxias
*Salidas: tiempo: el tiempo en años que pasa desde el momento iicial hasta que las galaxias colisionan
*/
	int tiempo;
/*Se importan los archivos para cada uno de los tiempos*/
	FILE *in1;
	FILE *in2;
	FILE *in3;
	FILE *in4;
	FILE *in5;
	in1 = fopen(filename1,"r");
	in2 = fopen(filename2,"r");
	in3 = fopen(filename3,"r");
	in4 = fopen(filename4,"r");
	in5 = fopen(filename5,"r");

/*Se comparan las posiciones de las estrellas para cada tiempo. Se define el momento de colision como aquel en el que las posiciones de las estrellas son iguales*/
	if (in1[0][1]==in1[120][1] && in1[0][2]==in1[120][2]){
		tiempo=1000;
			}
	else if {in2[0][1]==in2[120][1] && in2[0][2]==in2[120][2]){
		tiempo=2000;
	}
	else if {in3[0][1]==in3[120][1] && in3[0][2]==in3[120][2]){
		tiempo=3000;
	}
	else if {in4[0][1]==in4[120][1] && in4[0][2]==in4[120][2]){
		tiempo=4000;
	}
	else if {in5[0][1]==in5[120][1] && in5[0][2]==in5[120][2]){
		tiempo=5000;
	}
	else{
	printf("Las galaxias no colisionan");
	}
/*Se retorna el valor del tiempo que paso antes de la colision*/	
printf("Las galaxias colisionan en: tiempo=%d\n millones de años", tiempo);
 
}
