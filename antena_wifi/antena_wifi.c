//22 Escribir un programa en c que simule el uso de una antena wifi de una
//computadora,  ingresando el valor 'a' que indique en pantalla "antena encendida, buscando redes"
//con el valor 'p', que indique "antena apagada". Ademas que se repita en un do-while (opcion-char)


#include<stdio.h>
#include<stdlib.h>


int main()
{
    char opcion;
    printf("programa para prender o apagar la anteha wirless\n");
    do
    {
    printf("\n\t Opciones \n\t a para encender la antena");
    printf("\n\t p para apagar la antena\n\t");
    printf("\n\t e para terminar el programa\n\t");
    scanf("%c", &opcion);

    if(opcion=='a' || opcion=='A' )
    {
        system("cls");
        system("color F3");
        fflush(stdin);
        printf("\n\tla antena esta encendida");
    } else if (opcion=='p' || opcion=='P' ){
        system("cls");
        system("color 0F");
        fflush(stdin);
        printf("\n\tla antena esta apagada");
    }else if (opcion=='e' || opcion=='E' ){
        fflush(stdin);
    }
    }
    while(opcion!='e' && opcion!='E');
    system("PAUSE");
    return 0;
}
