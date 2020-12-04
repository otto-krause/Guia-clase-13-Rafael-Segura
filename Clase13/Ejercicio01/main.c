#include <stdio.h>
#include <stdlib.h>
//Faltan funciones.
int main()
{
    int resis[5], i, tot=0;// De 0 a 4 son 5 valores.
    printf("Ingresar 5 resistencias:\n");
    for(i=0; i<5; i++)
        scanf("%d",&resis[i]);

    for(i=0; i<5; i++)
    {
        if(i!=0)
            printf(" +");
        printf(" %d",resis[i]);
        tot += resis[i];
    }
    printf(" = %d",tot);

    return 0;
}
