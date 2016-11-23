/* Programa que permite calcular la potencia de un numero por medio de un for*/

 #include<stdio.h>
 #include<stdlib.h>

 int main (){
     int numero,opcion,potencia,contador=1;
     printf("\n\tPrograma que calcula la potencia de un numero\n\t");

      printf("\n\tIngrese el numero al que se\n\televara a la potencia:\n\t",163);
      scanf("%i",&numero);

      printf("Ingrese la potencia:");
      scanf("%i",&potencia);

      for (opcion=1;opcion<=potencia;opcion++){
        contador=contador*numero;
      }
      printf("El resultado de la potencia es: %i\n\t",contador);

 system("PAUSE");
 return 0;}



