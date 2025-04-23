#include<stdio.h>
int main (){

int forçap, narma;
float multc, dano;

printf("Digite a força do personagem(1 a 100): ");
scanf("%d", &forçap);
printf("Digite 0 nivel da arma(1 a 50): ");
scanf ("%d", &narma);
printf("Digite o multiplicador de critico (entre 1.0 e 2.0): ");
scanf("%f", &multc);

dano = forçap*narma*multc;

if (dano>5000)
printf ("Dano critico massivo %.2f\n", dano);
else if (dano>=1000 && dano <=5000)
printf("Dano critico %.2f\n", dano);
else
printf("Dano normal %.2f\n", dano);
return 0;
}

