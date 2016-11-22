/*
Universidad Autonoma de México
Facultad de Estudios Superiores Cuautitlan
Programacion 1
Canseco Gutiérrez Luis Enrique
 */


/* Escribir un programa en C que pida un numero y determine si este es positivo, negativo o cero */


float main()
{
/* determinamos las variables que se van a ocupar */
float numero;

printf("\n programa que evalue si es un numero negativo, positivo o un cero \n");

/* pedimos el numero */
printf("\n Ingrese el numero\t");
scanf("%f" , &numero);

if (numero < 0)
{
    printf("\n el numero %0.2f es negativo\n\n", numero);
}
if (numero == 0)
{
    printf("\n el numero %f es igual a cero\n\n", numero);
}
if (numero > 0)
{
    printf("\n el numero %0.2f es positivo\n\n", numero);
}

system("pause");
return 0;
}
