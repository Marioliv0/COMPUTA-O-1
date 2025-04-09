#include <stdio.h>

int main ()
{
    float A, G, Ra, Rg;
    printf("Digite o preço do Alcool e da Gasolina: ");
    scanf("%f %f", &A, &G );

    printf("Digite o rendimento com Alcool e com Gasolina (km/l): ");
    scanf("%f %f", &Ra, &Rg);

    float custoAlcool = A / Ra;
    float custoGasolina = G / Rg;

    if (custoAlcool < custoGasolina)
    {
        printf("A\n");
    }
    else
    {
        printf("G\n");
    }

    return 0;
}
