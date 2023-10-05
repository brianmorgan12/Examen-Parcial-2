#include <stdio.h>

int main() 
{
 int abisiesto;

    printf("Dame la fecha: ");
    scanf("%d", &abisiesto);

    if ((abisiesto % 4 == 0 && abisiesto % 100 != 0) || (abisiesto % 400 == 0)) {
        
        printf("Este sí es bisiesto\n");
    } 
	else 
	{
        printf("Claramete no es bisiesto\n");
    }

    return 0;
}

