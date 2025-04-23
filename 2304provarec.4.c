#include<stdio.h>
int main (){

int minutos, segundos, distancia, horas, velocidade;

 printf("Qual é a distancia em Km? ");
 scanf("%d", &distancia);
 printf("Em quantos minutos voce percorreu? ");
 scanf ("%d", &minutos);
 printf("Em quantos segundos voce percorreu? ");
 scanf("%d", &segundos);

 segundos= (minutos*60) + segundos;
 segundos/= distancia;

 minutos= segundos/60;
 segundos= segundos%60;

 printf("O ritimo foi: %d:%d\n", minutos, segundos);
 scanf("%d", &velocidade);


 return 0;
 }


