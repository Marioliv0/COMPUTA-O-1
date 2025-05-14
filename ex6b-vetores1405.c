
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 50

int main()
{

    int vetor[tamanho], i, novo;
    srand (time(NULL));

    for (i=0; i<tamanho; i++)
    {
        vetor[i]= rand()%50;
    }

    for (i=0; i<tamanho; i++)
    {
        printf ("%d\n", vetor[i]);
    }
    return 0;
    }



