#include <stdio.h>
#include <math.h>

int main () {

        float a, b, c;
        float x1, x2;
        float delta;

        printf("Digite o coeficiente de A: ");
        scanf("%f", &a);
        printf("Digite o coeficiente de B: ");
        scanf("%f", &b);
        printf("Digite o coeficiente de C: ");
        scanf("%f", &c);

        delta = b * b - 4 * a * c;

        if (a == 0 || delta < 0) {
            printf("Esta equacao nao possui raizes reais!\n");
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.4f\n", x1);
            printf("x2 = %.4f\n", x2);
        }

    return 0;

}