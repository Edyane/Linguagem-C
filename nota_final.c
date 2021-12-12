#include <stdio.h>

int main () {

    float nota1, nota2, nota_final;

    printf("Digite a nota do primeiro semestre: ");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo semestre: ");
    scanf("%f", &nota2);

    nota_final = nota1 + nota2;

    printf("NOTA FINAL = %.1f\n", nota_final);

    if (nota_final < 60.0) {
        printf("REPROVADO!\n");
    }

    return 0;
}
    