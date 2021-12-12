#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salary;

    scanf("%f", &salary);
        if (salary <= 2000.0)
            printf("Isento\n");
        else if (salary <= 3000.0)
            printf("R$ %.2f\n", (salary - 2000.0) * 0.08);
        else if (salary <= 4500.0)
            printf("R$ %.2f\n", 1000.0 * 0.08 + (salary - 3000.0) * 0.18);
        else
            printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + (salary - 4500.0) * 0.28);

    return 0;
}


