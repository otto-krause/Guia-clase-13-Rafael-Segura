#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alum[15], i;

    for(i=0;i<15;i++){
        printf("Ingresar la nota del alumno nro %d: ",i+1);
        scanf("%d",&alum[i]);
    }
    printf("\n\n\n");

    printf("Los alumnos cuya nota es mayor a 8 son:\n");
    for(i=0;i<15;i++){
        if (alum[i]>8)
            printf(" alumno nro %d",i+1);
    }

    return 0;
}
