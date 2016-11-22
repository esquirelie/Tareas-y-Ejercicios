/*
Universidad Autonoma de México
Facultad de Estudios Superiores Cuautitlan
Programacion 1
Canseco Gutiérrez Luis Enrique
 */


/* Escribir un programa en C que pida dos numeros y determine cual es el mayor */


float main()
{
/* determinamos las variables que se van a ocupar */
float numero_1, numero_2;


printf("\n programa numero mayor de dos numeros \n");

/* pedimos la edad de una persona */
printf("\n Ingrese dos numeros\t");
scanf("%f%i" , &numero_1, &numero_2);



/* detallamos la condicional que se tiene que seguir con el comando if */

if(numero_1 > numero_2)
{

/* si el primero es el numero mayor, entonces regresara el mensaje */
    printf("\n el mayor es %f\n", numero_1);

}
if (numero_1 < numero_2)
{
    printf("\n el mayor es %f\n", numero_2);
}
if (numero_1 == numero_2)
{
    printf("\n %f y %f son iguales \n", numero_1, numero_2);
}

system("pause");
return 0;
}
