#include <stdio.h>
int main () {
float n1, n2, n3, media, frequência;

printf("Digite as três notas separadas por espaço: ");
scanf("%f %f %f", &n1, &n2, &n3);

printf("Digite a frequência do aluno (em%%): ");
scanf("%f", &frequência);

media = ((n1+n2+n3)/3.0);

printf("/nmedia: %.2f/n", media);
printf("frequência: %.1f%%/n", frequência);

if (media >= 8.0 && frequência >= 75.0) {
printf("Aprovado com Distinção. ");
} else if (media >=6 <8 && frequência >= 75.0) {
printf("Aprovado Direto. ");
} else if (media >= 4 && frequência >= 75.0) {
printf("Vai para a final. ");
}else if (media< 4 && frequência < 75.0) {
printf("Reprovado Direto. ");
}

return 0;
}

