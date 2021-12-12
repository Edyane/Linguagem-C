#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite o valor do ponto x1 e y1!\n");
    scanf("%f%f", &x1, &y1);

    printf("Digite o valor do ponto x2 e y2:!\n");
    scanf("%f%f", &x2, &y2);

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distancia entre os dois pontos e: %.4lf\n", distancia);

    return 0;
}
