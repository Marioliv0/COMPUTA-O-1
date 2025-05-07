#include <stdio.h>
int arredonda (float x)
{
    if (x > 0)
        return (int) (x+0.5);
    else return (int) (x- 0.5);
}
int main ( )
{
    float valor;
    printf("Digite um numero decimal: ");
    scanf ("%f", &valor);
    int resultado = arredonda (valor);
    printf ("Arredondado: %d\n", resultado);
    return 0;
}
