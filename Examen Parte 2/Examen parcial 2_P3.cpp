#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); 

    int opcion;
    do 
	{
      int numeroAleatorio = (rand() % 5) + 1;

        int a = rand() % 100;
        int b = rand() % 100;
        int resultado;

        printf("Numero elegido del (1-5): %d\n", numeroAleatorio);
        printf("Valores aleatorios: %d y %d\n", a, b);

        switch (numeroAleatorio) {
            case 1:
                printf("La suma es: %d\n", resultado);
                resultado = a + b;
                break;
            case 2:
                printf("La multiplicacion es: %d\n", resultado);
                resultado = a * b;
                break;
            case 3:
                printf("La resta es: %d\n", resultado);
                resultado = a - b;
                break;
            case 4:
                printf("La division es: %d\n", resultado);
                resultado = a / b;
                break;
            default:
                printf(":(\n");
        }

        printf("Para la sig. operacion inserta un numero diferente a 1 y da enter, para salir del programa inserta 1:");
        scanf("%d", &opcion);

    } while (opcion != 1);

    return 0;
}

