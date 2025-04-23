#include<stdio.h>
int main(){

float largura, altura, perimetro, area, perimp;

printf("Digite a base do quarto em metros: ");
scanf("%f", &largura);
printf("Digite a altura do quarto em metros: ");
scanf("%f", &altura);

perimetro = (2*altura + 2*largura);
perimp = (2*altura + 2*largura)-0.8 ;
area = altura*largura;

printf("O perimetro total é: %.2f metros\n", perimetro);
printf ("A quantidade de rodape (menos a porta) necessario é: %.2f metros\n", perimp);
printf ("A quantidade de pisos necessario é: %.2f metros quadrados\n", area);

return 0;
}


