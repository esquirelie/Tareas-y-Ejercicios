/* Ejercicio:
    Hacer un programa en C que permita almacenar numero de libros prestados
    durante 10 dias en una biblioteca.
    Obtener el promedio de libros prestados durante esos 10 dias y mostrar
    en pantalla cuantos dias se prestaron menos libros que el promedio
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias[10];
    int n, i, suma=0, menor=0, mayor=0;
    float promedio_prestados;

    	printf("\n\t Programa biblioteca libros prestados\n\t");

    	for(n=0;n<=9;n++){
            printf("\n\t Ingrese cuantos libros se prestaron el %i dia\t", n+1);
            scanf("%i", &dias[n]);
            suma=suma+dias[n];
            promedio_prestados=suma/10;
    	printf("\n\t suma=%i de dias anteriores \n",suma);
    	}
        for(i=0;i<=9;i++){
            if(dias[i]<promedio_prestados){
                    menor++;
                printf("\n\t el dia %i se prestaron menos libros que el promedio \n\t", i+1);
            }else if(dias[i]>promedio_prestados){
                    mayor++;
                printf("\n\t el dia %i se prestaron mas libros que el promedio \n\t", i+1);
            }
        }
    	printf("\n\t promedio=%0.2f \n",promedio_prestados);

    printf("\n\t el total con menos libros prestados que el promedio es de: %i dias\n\t", menor);
	printf("\n\t el total con mas libros prestados que el promedio es de: %i dias\n\t", mayor);

    system ("PAUSE");
    return 0;
}
