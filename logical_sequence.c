#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, x4, x5, x6;
    scanf("%d", &x1);
    for(x2=1; x2<=x1; x2++)
    {
        x3 = x2*x2;
        x4 = x2*x2*x2;

        printf("%d %d %d\n",x2,x3,x4);
        x5 = x3+1;
        x6 = x4+1;
        printf("%d %d %d\n",x2,x5,x6);
    }
    return 0;
}
