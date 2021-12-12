#include <stdio.h>

int main () {

int n;
float soma, media;

printf("Quantos numeros voce vai digitar?");
scanf("%d", &n);

float vet [n];

for (int i = 0; i < n; i++) {
    printf("Digite um numero: ");
    scanf("%f", &vet[i]);
}

printf("\nValores: ");
for (int i = 0; i < n; i++) {
    printf("%.1f ", vet[i]);
}
printf("\n");

soma = 0;
for (int i = 0; i < n; i++) {
    soma = soma + vet[i];
}

printf("Soma = %.2f\n", soma);
media = soma / n;

printf("Media = %.2f\n", media);

return 0;

}