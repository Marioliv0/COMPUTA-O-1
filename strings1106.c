#include<stdio.h>



int stringsIguais(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }
    return s1[i] == s2[i];
}

int main() {
    char nome1[101], nome2[101], nome3[101];
    char entrada[101];

    printf("Digite o primeiro nome: ");
    fgets(nome1, 101, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite o segundo nome: ");
    fgets(nome2, 101, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o terceiro nome: ");
    fgets(nome3, 101, stdin);
    nome3[strcspn(nome3, "\n")] = '\0';

    while (1) {
        printf("Digite um nome: ");
        fgets(entrada, 101, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';

        if (stringsIguais(entrada, nome1) || stringsIguais(entrada, nome2) || stringsIguais(entrada, nome3)) {
            printf("Nome encontrado! Encerrando o programa.\n");
            break;
        } else {
            printf("Nome não encontrado. Tente de novo.\n");
        }
    }

    return 0;
}
