#include <stdio.h>
#include <stdlib.h>

int main()
{
        /* declaramos las variables que va a utilizar el programa para hacer la comparacion */
    int modelo;

    /*introduccion del programa solo texto */
    printf("\n con el anio de tu vehiculo podremos saber cuanto es lo\n");
    printf("\n debes de pagar en cuanto a la tenencia de tu vehiculo \n");
    printf("\n cual es el anio de tu vehiculo \n");

    scanf("%d", &modelo);
    if(modelo>=1960 && modelo<=1985)
    {
    printf("\n la tenencia para un modelo es de: 850 pesos\n\n");
    }
    else if (modelo>=1986 && modelo<=1999)
    {
    printf("\n la tenencia para un modelo es de: 1,150 pesos\n\n");
    }
    else if (modelo>=2000 && modelo<=2010)
    {
    printf("\n la tenencia para un modelo es de: 1,800 pesos\n\n");
    }
    else if (modelo>=2011&&modelo<=2016){
    printf("\n la tenencia para un modelo es de: 2,500 pesos\n\n");
    }


    system("PAUSE");
    return 0;
}

