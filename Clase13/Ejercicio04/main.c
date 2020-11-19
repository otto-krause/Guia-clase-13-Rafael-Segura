#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=30;
    int alum[max], i;
    float prom=0;

    for (i=0;i<max;i++){
        printf("Ingrese la nota del alumno %d: ",i+1);
        scanf("%d",&alum[i]);
    }
    for (i=0;i<max;i++){
        prom+= alum[i];
    }
    prom= prom/max;
    printf("El promedio del curso es %.2f",prom);

    return 0;
}
