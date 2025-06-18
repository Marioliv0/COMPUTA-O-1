#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    char linha[256];
    int contador = 1;

    entrada = fopen("teste1.txt", "r");
    saida = fopen("teste1_.txt", "w");


    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }
    while (fgets(linha, sizeof(linha), entrada) != NULL) {
        fprintf(saida, "%d. %s", contador++, linha);
    }

    fclose(entrada);
    fclose(saida);

    printf("Arquivo teste1_.txt criado com sucesso!\n");

    return 0;
}
