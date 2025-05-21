#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];

    srand (time(NULL));
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            matriz[i][j]= rand() % 100;
        }
    }
    printf("A matriz 5/5 preenchida com numeros aleatorios é:\n");
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
