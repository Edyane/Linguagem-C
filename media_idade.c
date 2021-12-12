#include <stdio.h>

int main () {

    int idade, soma;
    int cont;
    float media;


    printf("Digite as idades: ");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    if (cont == 0) {
        printf("Impossivel Calcular!");
    }
    else {
        media = soma  / cont;
        printf("MEDIA = %.2f\n", media);
    }

    return 0;

}