#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[4], i, asc=0, desc=0;

    //entrada
    for(i=0;i<5;i++){
        printf("Agrege un numero a la lista: ");
        scanf("%d",&num[i]);
    }

    //verificacion
    for (i=0;i<4;i++){
        if(num[i]<=num[i+1]){
            asc++;
        }
    }
    for (i=0;i<4;i++){
        if(num[i]>=num[i+1]){
            desc++;
        }
    }

    //salida
    if (asc==4){
        printf("Ingresados de forma ascendente");
    }
    else
    {
        if (desc==4){
            printf("Ingresados de forma descendiente");
        }
        else
            printf("Ingresados de forma desordenada");

    }

    printf("Suma entre extremos %d",num[0]+num[4]);

    return 0;
}
