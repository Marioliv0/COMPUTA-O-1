#include <stdio.h>

int main()
{
    int N;
    int i = 1;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    while (i <= 100)
    {
        if(i % N == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
