#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[10], i, j=0;
    int sum=0;
    unsigned long long int prod=1;
    float prom=0;

    for(i=0;i<10;i++){
        printf("Agrege un numero: ");
        scanf("%d",&vec[i]);
    }

    for(i=0;i<10;i++){
        sum+=vec[i];
    }
    for(i=0;i<10;i++){
        prod=prod*vec[i];
    }
    prom=sum/10;

    for(i=0;i<10;i++){
        if(vec[i]<prom)
            j++;
    }
    printf("La suma de los elementos es %d\n", sum);
    printf("El producto de los elementos es %llu\n",prod);
    printf("El promedio es %.2f; y %d elementos estan por debajo del promedio\n",prom,j);

    return 0;
}
