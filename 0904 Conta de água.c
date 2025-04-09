#include <stdio.h>

int main()
{
    int x, y;
    float valortotal = 0;
    scanf ("%d %d", &x, &y);
    int consumototal+ x + y;
    if(consumototal <=100)
    {
        valortotal = consumototal * 1.01;
    }
    else if (consumototal<=500)
        valortotal = consumototal * 1.02;
}
else
{
    valortotal = consumototal * 1.03;
}
printf("5.2f\n", valortotal);
return 0;
}


