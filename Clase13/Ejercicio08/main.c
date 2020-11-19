#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[12], i;

    for(i=0;i<11;i++)
        num[i]=i;

    printf("Secuancia Fibonacci: ");
    for(i=1;i<11;i++){
        num[i+1]=num[i]+num[i-1];
        printf(" %d,",num[i]);
    }

    return 0;
}
