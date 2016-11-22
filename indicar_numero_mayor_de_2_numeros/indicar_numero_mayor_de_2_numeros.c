/*
Universidad Autonoma de México
Facultad de Estudios Superiores Cuautitlan
Programacion 1
Canseco Gutiérrez Luis Enrique
 */


/* Escribir un programa en C que solicite 2 numeros enteros e indique con un mensaje cual es el mayor de ambos */


float main()
{
/* determinamos las variables que se van a ocupar */
float numero_1, numero_2, mayor, menor;

printf("\n programa que selecciones de dos numeros el numero mayor \n");

/* pedimos el primero de los numeros que se van a evaluar */
printf("\n Introduce el primero de los numeros a evaluar \t");
scanf("%f",&numero_1);

/* pedimos el segundo numero que se va a evaluar */
printf("\n Introduce el segundo de los numeros a evaluar \t");
scanf("%f", &numero_2);

/* detallamos la condicional que se tiene que seguir con el comando if */

if(numero_1 > numero_2)
{

/* si el primero es el numero mayor, entonces regresara el mensaje */
    printf("\n el numero %0.2f es el numero mayor \n\n", numero_1);

} else {

/* si el segundo es el numero mayor, entonces regresara el mensaje */
    printf("\n el numero %0.2f es el numero mayor \n\n", numero_2);

}

system("pause");
return 0;
}
