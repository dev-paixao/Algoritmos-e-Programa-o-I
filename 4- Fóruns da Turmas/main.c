#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso;
    float altura;
    float IMC;

    printf("\nINFORME SEU PESO: ");
    scanf("%f", &peso);

    printf("\nINFORME SUA ALTURA: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    printf("\nIMC = %.2f\n", IMC);

    if (IMC <= 18.49)
        printf("\nABAIXO DO PESO\n");
    else if (IMC <= 24.99)
        printf("\nPESO NORMAL\n\n");
    else if (IMC <= 29.99)
        printf("\nACIMA DO PESO\n\n");
    else if (IMC <= 34.99)
        printf("\nOBESIDADE I\n\n");
    else if (IMC <= 39.99)
        printf("\nOBESIDADE II (SEVERA)\n\n");
    else
        printf("\nOBESIDADE III (MÓRBIDA)\n\n");

    system("pause");
    return 0;
}
