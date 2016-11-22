/* Programa que Calcula el radio de un circulo */

#include <stdio.h>
#include <stdlib.h>

float main()
{
    float radio, area;
    printf("\n introduce el radio\n\n");
    scanf("%f",&radio);
    
    area = 3.1416 * (radio*radio);
    printf("el area es: %0.2f", area);
    
    return 0;
}