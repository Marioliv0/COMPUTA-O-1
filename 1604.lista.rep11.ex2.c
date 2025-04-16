#include<stdio.h>
int main()
{
    int numero, qtdPositivos = 0;
    float soma = 0, media;
    printf ("Digite valores entre -1000 e 1000 (negativo para sair):");
    scanf("%d", &numero);
    while(numero !=-1000)
{
    if (numero > 0)
        {
            soma += numero;
            qtdPositivos++;
        }
        scanf("%d", numero);
    }
    if (qtdPositivos > 0)
{
    media = soma / qtdPositivos;
    printf ("%d valores positivos\n", qtdPositivos);
        printf("media: %.2f\n", media);
    }
    else
    {
        printf ("Nenhum valor positivo foi digitado.\n");
    }
    return 0;
}
