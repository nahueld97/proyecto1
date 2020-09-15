#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
int a, b;
int main()
{
    printf("inserte 2 numeros: \n");
    scanf("%d %d", &a, &b);
    printf("la suma es %d", suma(a, b));
    return 0;
}