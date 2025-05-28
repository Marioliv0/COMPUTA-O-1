#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

void imprimematriz(int d[][N], int n1, int nc) {
for (int i = 0; i < n1; i++)
{
for (int j=0; j<nc; j++)
    {
        printf ("%2d\n", d[i][j]);
    }
    printf("\n");
}
}
int numerorepetido (int matriz[][N], int linhas, int colunas, int valor)
{
    for (int i=0; i<linhas; i++)
    {
        for(int j=0; j < colunas; j++)
        {
            if (matriz[i][j] == valor)
            {
                return 1;
            }
        }
    }
    return 0;
}
void preenchebingo(int d[][N], int n1, int nc)
{
    srand(time(NULL));

    int numero;

    for (int i=0; i<n1; i++)
    {
        for ( int j=0; j<nc; j++)
        {
            int repetido = 1;

            while (repetido)
            {

                numero = rand() % 100;
                repetido = numerorepetido(d, n1, nc, numero);
            }
            d[i][j]= numero;
        }
    }
}
int main ()
{
    int cartela [N][N];

    preenchebingo(cartela, N,N);
    printf("Cartela de bingo:\n");
    imprimematriz(cartela, N, N);

    return 0;
}








