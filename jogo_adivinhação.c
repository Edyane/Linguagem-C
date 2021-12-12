#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("***************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao!\n");
    printf("***************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numgrande = rand();
    int numsecreto = numgrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int level;
        printf("Escolha o nivel de dificuldade?\n");
        printf("(1) Easy (2) Medium (3) Hard\n");
        printf("Ecolha:\n");
        scanf("%d", &level);

    int numdetentativas;
    int acertou = 0;

    switch(level) {
    case 1:
        numdetentativas = 15;
        break;

    case 2:
        numdetentativas = 10;
        break;

    default:
        numdetentativas = 5;
        break;

    }

   for(int i = 1; i <= numdetentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute?\n");
        scanf("%d", &chute);

    int acertou = (chute == numsecreto);
    int maior = chute > numsecreto;

        printf("Seu chute foi %d\n", chute);

    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos\n");

        continue;
    }

    if (acertou) {

        break;
    }

    else if (maior){
        printf("Seu chute e maior que o numero secreto!\n");
    }

    else {
        printf("Seu chute foi menor que o numero secreto!\n");
            }
            tentativas++;

    double pontosperdidos = abs(chute - numsecreto)/(double)2;
    pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo!\n");

    if(acertou == 0) {
        printf("Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Jogue novamente!");
    } else {
        printf("Voce perdeu! Tente novamente!\n");
    }
}
