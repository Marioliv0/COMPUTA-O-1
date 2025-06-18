
#include <stdio.h>
#include<stdlib.h>



int main () {

FILE* arquivo;
char linha [300];

arquivo = fopen("teste1.txt", "r");

if( arquivo == NULL)
{
    printf("Não consegui achar o arquivo!");
    return 1;
}
  while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);

    return 0;
}
