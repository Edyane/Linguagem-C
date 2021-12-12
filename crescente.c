#include <stdio.h>

int main () {

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
            if (x < y) {
            printf("Crescente!\n");
        }
            else {
            printf("Decrescente!\n");
        }
            printf("Digite outros dois numeros:");
            scanf("%d", &x);
            scanf("%d", &y);
        }
        
        return 0;
    }
