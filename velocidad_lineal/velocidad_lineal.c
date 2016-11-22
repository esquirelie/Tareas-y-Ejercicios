/*
Universidad Autonoma de Mexico
Facultad de Estudios Superiores Cuautitlan
Programacion 1
Canseco Gutierrez Luis Enrique
 */


 /* Programa en C que permita resolver la formula de la velocidad lineal */
#include <stdio.h>
#include <stdlib.h>

float main()
{

/* definimos como flotantes los valores de las variables que
estamos utilizando, ya que al ser volumenes se pueden ingresar
valores con punto decimal */
float Aceleracion, VelocidadFinal, VelocidadInicial, VelocidadTotal, Distancia, Tiempo;

printf("La aceleraci�n lineal es el cambio que tiene la velocidad en una unidad de tiempo. \n");
printf("Como la velocidad es un vector, un cambio en la velocidad es tambien un vector.\n");
printf("\n");
printf("De esta manera se tiene que la aceleraci�n a= (Vf - Vi )/dt.\n\n");
printf("\n");

printf("Indica cual es la Velocidad Inicial del objeto en movimiento en m/s \n\n");
scanf("%f", &VelocidadInicial);
printf("\n");

printf("Indica la velocidad maxima alcanzada por el objeto, en m/s, antes de que este empezara a desacelerar \n");
scanf("%f", &VelocidadFinal);
printf("\n");

/* realizamos la resta de las velocidades */
VelocidadTotal = VelocidadFinal - VelocidadInicial;

printf("Indica en metros, la distancia recorrida por el cuerpo \n");
scanf("%f", &Distancia);
printf("\n");

printf("Por ultimo, cuanto tiempo en segundos se tardo en recorrer esa distancia \n");
scanf("%f", &Tiempo);
printf("\n");

/* calculamos la aceleracion */
Aceleracion = VelocidadTotal/(Distancia * Tiempo);

printf("La aceleracio obtenida por el cuerpo fue de %f m/s^2", Aceleracion);
printf("\n");

system("pause");
return 0;
}
