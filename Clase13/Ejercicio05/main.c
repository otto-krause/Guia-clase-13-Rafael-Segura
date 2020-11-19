#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias=3, vdor=5;
    int i, j, vend[vdor], tot=0, win=0;

    for(i=0;i<vdor;i++)
        vend[i]=0;

    for (i=0;i<dias;i++){

        printf("Dia %d\n",i+1);

        for (j=0;j<vdor;j++){
            printf("Unidades vendidas del vendedor %d: ",j+1);
            scanf("%d",&vend[j]);
            tot +=vend[j];

            if (win<vend[j]){
                win=j;
            }
        }
    }
    printf(" %d Unidades vendidas, el mejor vendedor fue el nro %d, dia %d",tot,win);


    return 0;
}
