#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,N2;

    printf("Ingrese el primer numero: ");
    scanf("%d",&N1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&N2);

    if((N1%N2)==0)
    {
        printf("Es divisible");
    }
    else
    {
        printf("No es divisible");
    }

    return 0;
}
