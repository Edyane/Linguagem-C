#include <stdio.h>

int main() {

    short int N;

    scanf("%hd", &N);

    while (N--) {

        int x, y, rafael, beto, carlos;

        scanf("%d %d", &x, &y);

        rafael = 9 * x * x + y * y;
        beto =  2 * x * x + 25 * y * y;
        carlos = -100 * x + y * y * y;

        if (rafael >= beto && rafael >= carlos)
            printf("Rafael ganhou\n");
        else if (beto >= rafael && beto >= carlos)
            printf("Beto ganhou\n");
        else printf("Carlos ganhou\n");

    }
    return 0;
}
