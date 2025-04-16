#include<stdio.h>
int main() {
int numero, maior;

printf ("Digite um numero positivo inteiro (negativo para sair): ");
scanf("%d", &numero);
if(numero<=0) {
printf("Nenhum numero positivo foi digitado.\n");
return 0;
}
maior = numero ;
while(numero>=0) {
printf("Digite outro numero (negativo para sair): ");
scanf("%d", &numero);
if (numero>=0 && numero > maior)
maior = numero;
}
printf("O maior numero digitado foi:%d\n", maior );

return 0;

}



