 /* Hacer un programa que lea 10 números por teclado, los almacene en un array y los ordene de forma ascendente.*/

 #include <stdio.h>
 #include <stdlib.h>

int main()
{
  float aux, numeros[10];
  int i,j,n=10;
  printf("\n\tPrograma que ordene numeros de forma ascendente\n\t");

  for (i=0;i<n;i++){
       printf("\n\tEscriba un numero\n\t");
       scanf("%f",&numeros[i]);
      }

  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if(numeros[i]<numeros[j])
       {
           aux=numeros[i];
           numeros[i]=numeros[j];
           numeros[j]=aux;
       }
   }
  }
  for (i=n-1;i>=0;i--){
      printf("%0.2f\n",numeros[i]);
  }
  system("PAUSE");
  return 0;
}
