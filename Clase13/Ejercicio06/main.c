#include <stdio.h>
#include <stdlib.h>

int main()
{
    int per[20], i;

    for(i=0;i<20;i++){
        printf("Ingresar el sueldo de la persona nro %d: ",i+1);
        scanf("%d",&per[i]);

    }
    printf("\n\n\n");

    printf("Las siguientes personas ganan MAS de 2.000\n");
    for(i=0;i<20;i++){
        if (per[i]>=2000)
            printf(" per. nro %d, con %d\n",i+1, per[i]);
    }

    printf("Y las siguientes personas ganan MENOS de 2.000\n");
    for(i=0;i<20;i++){
        if (per[i]<2000)
            printf(" per. nro %d, con %d\n",i+1, per[i]);
    }

    return 0;
}
