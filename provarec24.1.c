#include<stdio.h>
int main ()
{

    float A, L, area, Ca = (2,0);
    int latas;

    printf("Digite a Altura em metros: ");
    scanf("%f", &A);
    printf("Digite a Largura em metros: ");
    scanf("%f", &L);

    area = A*L;
    latas= ceil(area/2);

    printf("Area da parede: %.2f m quadrados \n", area);
    printf ("Voce vai precisar de %d lata(s) de tinta.\n", latas);

    return 0;
}
