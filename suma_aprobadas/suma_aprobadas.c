/* Problema:
    Hacer un programa que solicite 10 calificaciones y que indique la cantidad de
    aprobadas y reprobadas
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
	int cal[10]; /*iniciamos el arreglo con 10 valores enteros*/
	int n, aprobada=0, reprobada=0; /*iniciamos los contadores en 0*/

	printf("\n\t Programa suma calificacion");

	/*iniciamos el ciclo for que va a solicitar las 10 calificaciones */
	for(n=0;n<=9;n++){

	  printf("\n\t Ingrese calificacion #%i \t", n+1);
	  scanf("%i", &cal[n]);
    /* En caso de que la calificacion se encuentre fuera del rango de 0 a 10, mandara un error*/
	while(cal[n]<0 || cal[n]>10){
    /* y solicitara nuevamente que se ingrese una calificacion valida */
	 printf("\n\t Error!! \n\t Ingrese una calificacion valida #%i \t", n+1);
	 scanf("%i", &cal[n]);
}
}
	do{
            /*Inicia el ciclo for con la validacion de la calificacion ingresada */
	   for(n=0;n<10;n++){
	       /* si la calificacion esta en el rango de 0 a 5 el contador de reprobada
	       se incrementara en 1 */
		if(cal[n]>=0 && cal[n]<=5){
			reprobada++;}
	       /* si la calificacion esta en el rango de 6 a 10 el contador de aprobada
	       se incrementara en 1 */
		else if(cal[n]>=6 && cal[n]<=10)
            {
			aprobada++;}
				}
                /*regresamos el valor de n a 0 con un while */
}	while(n=0);
            /* imprimira la informacion de los contadores de las calificaciones */
	printf("\n\t el total de aprobadas es de:  %i calificaciones \n\t", aprobada);
	printf("\n\t el total de reprobadas es de: %i calificaciones \n\\t", reprobada);


	system("PAUSE");
	return 0;
}
