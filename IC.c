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
#define PI 3.14159


float *PosicionesOrbitax (int r);
float *VelocidadesOrbitay (int r);
float *PosicionesOrbitax (int r);
float *VelocidadesOrbitay (int r);
int main (int argc, char *argv[])
{
/*
*Metodo principal del programa, llama a las otras funciones y mètodos. Genera un archivo con los datos de posiciones y velocidades de la galaxia
*Entradas: -argc: tamanio del vector de parametros
*-*argv[]: es el vector de parametros, con las posiciones y velocidades inicales del centro de la galaxia
*Salidas: -0
*/

	if(argc!= 4)
	{
		printf ("Los argumentos de entrada deben ser: posx, posy, velx, vely, del cuerpo central");
		exit (1);
	}
	FILE *archivo;
	float *Posix;
	float *Velox;
	float *Posiy;
	float *Veloy;


	int i;
	int j;
	int k;

	float xCentro;
	float yCentro;
	float vxCen;
	float vyCen;

	float *Aux12;
	float *Aux18;
	float *Aux24;
	float *Aux30;
	float *Aux36;

	char nombre[100]="CondicionesIniciales.txt";

	Aux12x = malloc(12 * sizeof(float));
	Aux18x = malloc(18 * sizeof(float));
	Aux24x = malloc(24 * sizeof(float));
	Aux30x = malloc(30 * sizeof(float));
	Aux36x = malloc(36 * sizeof(float));

	Aux12y = malloc(12 * sizeof(float));
	Aux18y = malloc(18 * sizeof(float));
	Aux24y = malloc(24 * sizeof(float));
	Aux30y = malloc(30 * sizeof(float));
	Aux36y = malloc(36 * sizeof(float));

	Posix = malloc(121 * sizeof(float));
	Velox = malloc(121 * sizeof(float));
	Posiy = malloc(121 * sizeof(float));
	Veloy = malloc(121 * sizeof(float));


	xCentro=atof(argv[1]);
	yCentro=atof(argv[2]);
	vxCen=atof(argv[3]);
	vyCen=atof(argv[4]);

	Posix[0] = xCentro;
	Posiy[0] = yCentro
	Velox[0] = vxCen;
	Veloy[0] = vyCen;

	for(i=2; i<242; i++)
	{
		if(i<14)
		{
			Aux12x = PosicionesOrbitax (10);
			Aux12y = PosicionesOrbitay (10);
			Posix[i] = Aux12x[i-2] + xCentro;
			Posiy[i] = Aux12y[i-2] + yCentro;
		}	
		else
		{
			if (i<32)
			{
				Aux18x = PosicionesOrbitax (20);
				Aux18y = PosicionesOrbitay (20);
				Posix[i] = Aux18x[i-14] + xCentro;
				Posiy[i] = Aux18y[i-14] + yCentro;			
			}
			else
			{
				if (i<56)
				{
					Aux24x = PosicionesOrbitax (30);
					Aux24y = PosicionesOrbitay (30);
					Posix[i] = Aux24x[i-32] + xCentro;
					Posiy[i] = Aux24y[i-32] + yCentro;
				}
				else
				{
					if (i<86)
					{
						Aux30x = PosicionesOrbitax (40);
						Aux30y = PosicionesOrbitay (40);
						Posix[i] = Aux30x[i-56] + xCentro;
						Posiy[i] = Aux30y[i-56] + yCentro;
					}
					else
					{
						Aux36x = PosicionesOrbitax (50);
						Aux36y = PosicionesOrbitay (50);
						Posix[i] = Aux36x[i-86] + xCentro;
						Posiy[i] = Aux36y[i-86] + yCentro;
					}
				}
			}
		}
	}

	for(j=1; j<121; j++)
	{
		if(i<14)
		{
			Aux12x = VelocidadesOrbitax (10);
			Aux12y = VelocidadesOrbitay (10);
			Velox[j] = Aux12x[j-1] + vxCen;
			Veloy[j] = Aux12y[j-1] + vyCen;
		}	
		else
		{
			if (j<32)
			{
				Aux18x = VelocidadesOrbitax (20);
				Aux18y = VelocidadesOrbitay (20);
				Velox[j] = Aux18x[j-14] + vxCen;
				Veloy[j] = Aux18y[j-14] + vyCen;			
			}
			else
			{
				if (j<56)
				{
					Aux24x = VelocidadesOrbitax (30);
					Aux24y = VelocidadesOrbitay (30);
					Velox[j] = Aux24x[j-32] + vxCen;
					Veloy[j] = Aux24y[j-32] + vyCen;
				}
				else
				{
					if (i<86)
					{
						Aux30x = VelocidadesOrbitax (40);
						Aux30y = VelocidadesOrbitay (40);
						Velox[j] = Aux30x[j-56] + vxCen;
						Veloy[j] = Aux30y[j-56] + vyCen;
					}
					else
					{
						Aux36x = VelocidadesOrbitax (50);
						Aux36y = VelocidadesOrbitay (50);
						Velox[j] = Aux36x[j-86] + vxCen;
						Veloy[j] = Aux36y[j-86] + vyCen;
					}
				}
			}
		}
	}


	archivo = fopen(nombre,"w");
        for(k = 0; j < 121; j++)
	{
                fprintf(out, "%d        %f        %f        %f        %f\n", k-1, Posix[k], Posiy[k], Velox[k], Veloy[k]);
        }
        
        fclose(archivo);
	
	return 0;
}

float *PosicionesOrbitax (int r)
{
/*
*Metodo para calcular las posiciones de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Posiciones: vector con las coordenadas en x 
*/
	float *Posiciones;
	float posx;
	int puntos;
	int total;
	int i;
	if(r == 10)
	{
		puntos = 12;
	}
	else
	{
		if(r==20)
		{
			puntos = 18;
		}
		else
		{
			if(r==30)
			{
				puntos =24;
			}
			else
			{
				if(r==40)
				{
					puntos = 30;
				}
				else
				{
					puntos = 36;
				}
			}
		}
	}
	total = puntos;
	Posiciones = malloc(total * sizeof(float));
	for(i=0; i<puntos; i++)
	{
		posx = r*cos(2*PI*i/puntos);
		Posiciones[i] = posx;
	}
	
	return Posiciones;

}

float *VelocidadesOrbitax (int r)
{
/*
*Metodo para calcular las velocidades de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Velocidades: vector con las velocidades en x 
*/
	float *Velocidades;
	float velx;
	int puntos;
	int total;
	if(r == 10)
	{
		puntos = 12;
	}
	else
	{
		if(r==20)
		{
			puntos = 18;
		}
		else
		{
			if(r==30)
			{
				puntos =24;
			}
			else
			{
				if(r==40)
				{
					puntos = 30;
				}
				else
				{
					puntos = 36;
				}
			}
		}
	}
	total = puntos;
	Velocidades = malloc(total * sizeof(float));
	Magnitud = sqrt(r*6.67*1.99*(10^(30)))
	for(i=0; i<puntos; i++)
	{
		velx = -1*Magnitud*sin(2*PI*i/puntos);
		Velocidades[i] = velx;
	}
	return Velocidades;

}

float *PosicionesOrbitay (int r)
{
/*
*Metodo para calcular las posiciones de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Posiciones: vector con las coordenadas en x 
*/
	float *Posiciones;
	float posy;
	int puntos;
	int total;
	int i;
	if(r == 10)
	{
		puntos = 12;
	}
	else
	{
		if(r==20)
		{
			puntos = 18;
		}
		else
		{
			if(r==30)
			{
				puntos =24;
			}
			else
			{
				if(r==40)
				{
					puntos = 30;
				}
				else
				{
					puntos = 36;
				}
			}
		}
	}
	total = puntos;
	Posiciones = malloc(total * sizeof(float));
	for(i=0; i<puntos; i++)
	{
		posy = r*sin(2*PI*i/puntos);
		Posiciones[i] = posy;
	}
	
	return Posiciones;

}

float *VelocidadesOrbitay (int r)
{
/*
*Metodo para calcular las velocidades de los cuerpos que orbitan a un radio dado
*Entradas: -r: entero que indica el radio en kiloparsecs de la orbita a calcular
*Salidas: -*Velocidades: vector con las velocidades en x 
*/
	float *Velocidades;
	float vely;
	int puntos;
	int total;
	if(r == 10)
	{
		puntos = 12;
	}
	else
	{
		if(r==20)
		{
			puntos = 18;
		}
		else
		{
			if(r==30)
			{
				puntos =24;
			}
			else
			{
				if(r==40)
				{
					puntos = 30;
				}
				else
				{
					puntos = 36;
				}
			}
		}
	}
	total = puntos;
	Velocidades = malloc(total * sizeof(float));
	Magnitud = sqrt(r*6.67*1.99*(10^(30)))
	for(i=0; i<puntos; i++)
	{
		vely = Magnitud*cos(2*PI*i/puntos);
		Velocidades[i] = vely;
	}
	return Velocidades;

}
