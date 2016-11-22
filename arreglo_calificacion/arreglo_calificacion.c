/* Problema:
    Un profesor necesita un programa que permita dar la calificacion de 10 alumnos
    Una vez capturados las calificaciones dar una opcion de buscar una calificacion
    e indicar el numero de veces que se encontro en la lista y en que numero de lista
    */

    #include <stdio.h>
    #include <stdlib.h>
    int main(){
        int cal[10];
        int n, c, numero_veces=0;

        printf("\n Programa calificacion \n");

        for(n=0;n<=9;n++){
            printf("\n\t Ingrese Calificacion #%i\t", n+1);
            scanf("%i", &cal[n]);
            while(cal[n]<0 || cal[n]>10){
                printf("\n\t Error! \n\t Ingrese de nuevo la calificacion no %i\t", n+1);
                scanf("%i",&cal[n]);
            }
        }
        do{
            printf("\n\t Busqueda por calificacion \n\t Ingrese Calificacion a buscar\t");
            scanf("%i",&c);
            for(n=0;n<10;n++){
                if(c==cal[n]){
                        numero_veces++;
                        printf("\n El alumno con numero de lista %i tiene %i", n+1, c);
                }
            }
            printf("\n y se encontro la calificacion %i veces", numero_veces);
            printf("\n Desea buscar otra calificacion? 1 - si\t");
            scanf("%i",&n);
            if(n==1)
                numero_veces=0;
        }while(n==1);
    system("PAUSE");
    return 0;
    }
