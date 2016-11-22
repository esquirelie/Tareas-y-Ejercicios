 #include<stdio.h>
 #include<stdlib.h>

 int main (){
     int numero,opcion,potencia,contador=1;

      scanf("%i",&numero);
      printf("Ingrese la potencia:");
      scanf("%i",&potencia);

      for (opcion=1;opcion<=potencia;opcion++){
        contador=contador*numero;
      }
      printf("El resultado de la potencia es: %i\n\t",contador);

 system("PAUSE");
 return 0;}



