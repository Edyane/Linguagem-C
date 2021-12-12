#include <stdio.h>
int main()
{
    int N, X;
    int y1, y2, y3;
    int y4=0;

    scanf("%d", &N);
    for(y1=1; y1<=N; y1++)
    {
        scanf("%d", &X);
        y3=X/2; y4=0;

        for(y2=1; y2<=y3; y2++)
        {
            if(X%y2==0)
                y4+=y2;
        }
        if(y4==X)
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);
    }
    return 0;
}
