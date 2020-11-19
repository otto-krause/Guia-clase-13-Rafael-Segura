#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resis[4], i, tot=0;
    printf("Ingresar 5 resistencias:\n");
    for(i=0; i<5; i++)
        scanf("%d",&resis[i]);

    for(i=0; i<5; i++){
        if(i!=0)
            printf(" +");
        printf(" %d",resis[i]);
        tot += resis[i];
    }
    printf(" = %d",tot);

    return 0;
}
