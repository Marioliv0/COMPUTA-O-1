#include<stdio.h>

int stringsIguais(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
        i++;
    }
    return s1[i] == s2[i];
}

int main()
{
    char nome1[101], nome2[101], nome3[101];
    char entrada[101];


    printf("Digite o primeiro nome: ");
    scanf("%100s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%100s", nome2);

    printf("Digite o terceiro nome: ");
    scanf("%100s", nome3);

    while (1)
    {

        printf("Digite um nome: ");
        scanf("%100s", entrada);

        if (stringsIguais(entrada, nome1) || stringsIguais(entrada, nome2) || stringsIguais(entrada, nome3))
        {
            printf("Nome encontrado! Encerrando o programa.\n");
            break;
        }
        else
        {
            printf("Nome não encontrado. Tente de novo.\n");
        }
    }

    return 0;
}
