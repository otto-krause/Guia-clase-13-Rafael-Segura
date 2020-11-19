#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, num2=0, i, j=0, max=-1;


    printf("Ingrese 2 numeros: ");
    scanf("%d %d",&num,&num2);
    if (num<num2){
        for (i=num;i<num2;i++)
            max++;
    }
    else{
        for (i=num2;i<num;i++)
            max++;
    }
    int inter[max];


    if (num<num2){
        for (i=num+1;i<num2;i++){
            inter[j++]=i;
        }
    }
    else{
        for (i=num2+1;i<num;i++){
            inter[j++]=i;
        }
    }

    for (i=0;i<max;i++){
        printf(" %d ", inter[i]);
    }

    return 0;
}
