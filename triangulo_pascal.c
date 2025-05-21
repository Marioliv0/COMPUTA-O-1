#include <stdio.h>
void preenchertp(int N, int matriz[N][N])
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<=i; j++)
        {
            if (j==0 || j==i)
            {
                matriz[i][j]=1;
            }
            else
            {
                matriz[i][j]= matriz[i-1][j-1]+ matriz[i-1][j];
            }
        }
    }
}


void imprimirtp(int N, int matriz[N][N]){
printf("\nTriangulo de Pascal:\n");
for (int i=0; i<N; i++)
{
    for (int j=0; j<=i; j++)
    {
        printf("%4d", matriz[i][j]);
    }
    printf("\n");
}
}

int main()
{
    int N;
    printf("Digite o valor de N(Tamanho do triangulo): ");
    scanf("%d", &N);
    int matriz [N][N];

    preenchertp(N, matriz);
    imprimirtp(N, matriz);



    return 0;
}



