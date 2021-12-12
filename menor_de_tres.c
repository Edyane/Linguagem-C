
#include <stdio.h>
#include <math.h>

int main () {
    
    int n1, n2, n3;
    int menor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3) {
        menor = n1;
    }
    else if (n2 < n3) {
        menor = n2;
    }
    else {
        menor = n3;
    }

    printf("MENOR = %d\n", menor);

    return 0;
}