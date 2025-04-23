#include<stdio.h>
int main ()
{

    int nib, vi, vf, soma=0;
    printf("Digite um numero inteiro base: ");
    scanf("%d", &nib);
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &vi);
    printf("Digite o valor final do intervalo: ");
    scanf ("%d", &vf);

    for ( int i =vi; i<= vf; i++)
    {
        if (i% nib==0)
        {
            soma+= i;
        }
    }
    printf("A soma dos multiplos de %d entre %d e %d é: %d\n", nib, vi, vf, soma);
    return 0;
}
