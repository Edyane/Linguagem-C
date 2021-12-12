#include <stdio.h>

int main(){
    
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    
    int N;
    
    while(scanf("%d",&N)!=EOF)
    {
        int ara[N][N];
        int a,b,c,d,e,f,g,h;
        for(a = 0; a < N; a++)
        {
            for(b = 0; b < N; b++)
                ara[a][b]=3;
        }
        for(a = 0; a < N; a++)
            ara[a][a]=1;
        d = N - 1;
        
        for(a = 0,b = d; a < N; a++,b--)
            ara[a][b]=2;
        for(a = 0; a < N; a++)
        {
            for(b = 0; b < N; b++)
            printf("%d",ara[a][b]);
            printf("\n");
        }
    }
    return 0;