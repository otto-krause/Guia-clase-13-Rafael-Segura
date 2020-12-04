#include <stdio.h>
#include <stdlib.h>
//Faltan funciones.
int main()
{
    int num[5], i, mayor=0;//idem ejercicio anterior.
    float  prom=0;
    printf("Ingresar 5 valores: \n");
    for(i=0; i<5; i++)
        scanf("%d",&num[i]);

    for(i=0; i<5; i++)
    {
        prom += num[i];
        if (num[i]>mayor)
            mayor=num[i];
    }
    prom = prom/5;

    printf("El numero mas alto ingresado es %d\n",mayor);
    printf("El promedio es %.2f",prom);

    return 0;
}
