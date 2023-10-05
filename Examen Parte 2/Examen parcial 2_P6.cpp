#include <stdio.h>

int main() {
    int v1, v2, v3;

   
    printf("Valor 1:");
    scanf("%d", &v1);

    printf("Valor 2:");
    scanf("%d", &v2);

    printf("Valor 3:");
    scanf("%d", &v3);

    v1 = v1 + v2 + v3;
    v3 = v1 - v2 - v3;
    v2 = v1 - v2 - v3;
    v1 = v1 - v2 - v3;

    printf("Intercambio de valores:\n");
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);
    printf("v3 = %d\n", v3);

    return 0;
}

