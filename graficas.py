import numpy as np
import pylab as pl

def Graficas(ArchivoEntrada):
#Entradas: Archivos de entrada
#Salidas: Graficas
#Importa los archivos de ID, posiciones y velocidades

	texto=np.loadtxt("CondicionesIniciales.txt")
        if texto!='':
                posx=texto[:,1]
                posy=texto[:,2]        
		pl.scatter (posx,posy)
		pl.show()
	else:
                return 0
Graficas('CondicionesIniciales.txt')

