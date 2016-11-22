/*
Universidad Autonoma de M�xico
Facultad de Estudios Superiores Cuautitlan
Programacion 1
Canseco Guti�rrez Luis Enrique
 */


 /* Programa en C que permita resolver el volumen de un Prisma Rectangular */
#include <stdio.h>
#include <stdlib.h>

float main()
{

/* definimos como flotantes los valores de las variables que
estamos utilizando, ya que al ser volumenes se pueden ingresar
valores con punto decimal */
float lado_a, lado_b, area_base, altura_prisma, volumen;

/* Definimos que es un volumen*/
printf("\nEl volumen es una magnitud metrica de tipo escalar \n");
printf("definida como la extensi�n en tres dimensiones de una region del espacio.\n");
printf("Es una magnitud derivada de la longitud,\n");
printf("ya que se halla multiplicando la longitud, el ancho y la altura\n");

/* Hacemos la primera peticion de el lado a de la base y se almacena en su variable*/
printf("\n introduce el tama�o del lado a en cm\n\n");
scanf("%f", &lado_a);
printf("\n");

/* Hacemos la segunda peticion de el lado b de la base y se almacena en su variable*/
printf("\n introduce el tama�o del lado b en cm\n\n");
scanf("%f", &lado_b);
printf("\n");


/* realizamos la operacion para obtener el area de la base y mostramos el resultado en pantalla*/
area_base = lado_a * lado_b;
printf("el area de la base es de: %.2f cm", area_base);
printf("\n");

/* Hacemos la segunda peticion de la altura del prisma y se almacena en su variable*/
printf("\n introduce la longitud de la altura del prisma en cm\n\n");
scanf("%f", &altura_prisma);

/* realizamos la operacion para obtener el volumen y mostramos el resultado en pantalla*/
volumen = area_base * altura_prisma;
printf("\n");
printf("el volumen total del prisma es de %.2f cm \n\n", volumen);

system ("pause");
return 0;
}