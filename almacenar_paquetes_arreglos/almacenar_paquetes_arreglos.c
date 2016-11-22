/* Problema:
    Se necesita un programa que almacene el numero de paquetes entregados durante 8 horas en una
    empresa de mensajeria. Ademas mostrar el promedio de paquetes entregados durante esas 8 horas
    */

#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Da colores a la interfaz */
    system("color f0");

    /* iniciamos las variables que vamos a usar */
    int numero_paquetes[8];
    int i,suma_paquetes=0;
    float promedio;

    printf("\n programa mensajeria");
    /* iniciamos un for que es el que va a ser el arreglo */
    for (i=0;i<8;i++){
        printf("\n\t Ingrese el numero de paquetes entregados en la hora %i\t", i+1);
        scanf("%i", &numero_paquetes[i]);
        while(numero_paquetes[i]<0){
            printf("\n\t Error!! \n\t Ingrese de nuevo paquetes de la hora %i\t", i+1);
            scanf("%i", &numero_paquetes[i]);
        }
        suma_paquetes+=numero_paquetes[i];
    }
    promedio=(float)suma_paquetes/8;
    printf("\n\t El promedio de paquetes entregados fue %0.2f\t\n\n", promedio);

system("PAUSE");
return 0;
}
