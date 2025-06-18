#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    float numero, soma = 0.0;

    arquivo = fopen("teste2.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }


    while (fscanf(arquivo, "%f", &numero) != EOF) {
        soma += numero;
    }

    fclose(arquivo);


    printf("A soma dos valores é: %.2f\n", soma);

    return 0;
}
