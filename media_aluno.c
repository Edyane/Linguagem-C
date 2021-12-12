#include <stdio.h>

void resultado (float notas []);
//passando um vetor como argumento de uma função

int main(){

    float nota[3];

    printf("Insira a primeira nota do aluno:\n");
    scanf("%f", &nota[0]);
    printf("Insira a segunda nota do aluno:\n");
    scanf("%f", &nota[1]);
    printf("Insira a terceira nota do aluno:\n");
    scanf("%f", &nota[2]);

    resultado(nota);

    return 0;
}

void resultado (float nota[]){
    float media;

    media = (nota[0] + nota[1] + nota[2])/3;

    printf("A media do aluno e %.2f\n", media);

    if (media < 5) {
        printf("O aluno foi reprovado!\n");
    }   else {
        printf("O aluno foi aprovado!\n");
    }

}
