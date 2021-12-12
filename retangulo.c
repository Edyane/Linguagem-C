#include <stdio.h>
#include <math.h>

int main () {

    float base, altura, area, perimetro, diagonal; 

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("AREA = %.4f\n", area);
    printf("PERIMENTRO = %.4f\n", perimetro);
    printf("DIAGONAL = %.4f\n", diagonal);

    return 0;
}

