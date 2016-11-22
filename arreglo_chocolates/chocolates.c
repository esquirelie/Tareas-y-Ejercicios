/* Crear un programa que solicite el valor del arreglo y que
sume chocolates mediante un arreglo. */

#include<cstdlib>
#include<iostream>
using namespace std;
main ()
{

         int chocolates [10];
         int i;
         int suma=0;
         for(i=0;i<10;i++)
         cout<<"\n ingrese un valor para el arreglo";
         cin>>chocolates[i];
         suma=suma+chocolates[i];
         }

         cout<<"\n\n La suma de los chocolates es"<<suma;
         cout<<"\n\n\n";

system ("PAUSE");
return 0;
}
