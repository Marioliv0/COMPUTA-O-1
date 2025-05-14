#include<stdio.h>

void converteHora (int totalseg, int *hr, int *min, int *seg);

int main()
{

    int totalseg, hr, min, seg;
    printf("Informe o total de segundos: ");
    scanf("%d", &totalseg);

    converteHora(totalseg, &hr, &min, &seg);

    printf("O total de segundos é:\n ");
    return 0;
}

void converteHora (int totalseg, int *hr, int *min, int *seg)
{
    *hr= totalseg/3600;
    totalseg=totalseg % 3600;
    *min= totalseg/60;
    *seg= totalseg%60;
}
