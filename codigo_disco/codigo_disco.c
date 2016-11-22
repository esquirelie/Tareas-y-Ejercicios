#include <stdio.h>
#include <stdlib.h>

int main()
{
        /* declaramos las variables que va a utilizar el programa para hacer la comparacion */
    int codigo;

    /*introduccion del programa solo texto */
    printf("\n En la bse de datos de discos, tenemos los codigos del 1 al 3, ");
    printf("\n para descubrir que disco corresponde a cada codigo,\n");
    printf("\n escoge una opcion \n");

    /* pedimos primer variable */
    printf("\n ingresa el codigo\t");
    scanf("%d", &codigo);


    if(codigo == 1)
    {
    printf("\n la marca del disco es Toshiba\n\n");
    } else
    if (codigo == 2)
    {
    printf("\n la marca del disco es Western Digital \n\n");
    } else
    if (codigo == 3)
    {
    printf("\n la marca del disco es Seagate \n\n");
    } else
    printf("\n Opcion no disponible \n\n");

    system("PAUSE");
    return 0;
}

