#include <stdio.h>

int main()
{

    int C,N,i;
    float soma,s;

    scanf("%d",&C);
    while(C > 0)
    {
        scanf("%d",&N);
        soma = 0;
        s = 0;
        int num[N];
        for(i = 0; i < N; i++)
        {
            scanf("%d",&num[i]);
            soma+=num[i];
        }

        soma /= N;
        for(i = 0; i < N; i++)
        {
            if(num[i] > soma) s++;
        }

        printf("%.3f%c\n",s/N*100.000,'%');
        C--;

    }
    return 0;
}
