/*En una empresa fabricante de cpu´s,
 se requiere de un programa que promedie las temperaturas
 que va alcanzando un procesador durante un lapso de tiempo,
 cuando se ingrese el valor cero, se mostrará la suma total de
 temperaturas y su promedio.*/
#include<stdio.h>
 #include<stdlib.h>
 int main() {
	float promedio;
	int temperatura, sumaTemp=0, i=1, tiempo;
	system("color 6f");
	printf("Ingrese el tiempo que funcion%c el procesador(hrs):\t",162);
	scanf("%i",&tiempo);
	while(i<=tiempo) {
		printf("Ingrese temperatura (fin con cero):\t",i);
		scanf("%i",&temperatura,i);
		sumaTemp+=temperatura;
		i++;
	}
	promedio=(float)sumaTemp/tiempo;
	printf("El promedio de las temperaturas es:%0.2f\n",promedio);
	printf("La suma de las temperaturas es:%i\n",sumaTemp);
	system ("PAUSE");
	return 0;
}