def Graficas(ArchivosEntrada):
#Entradas: Archivos de entrada
#Salidas: Graficas
#Importa los archivos de ID, posiciones y velocidades
        infiles = open('ArchivosEntrada.txt','r')    
#Comprueba cuantos de estos se van a graficar y los grafica
        texto = infiles.readlines()
        if texto!='':
                posx=texto[:,1]
                posy=texto[:,2]
                plot (posx,posy)
        
            else:
                return 0
