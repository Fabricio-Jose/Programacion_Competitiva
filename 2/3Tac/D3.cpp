#include <stdio.h>

int main()
{
    long long int A[100001],x,N;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
        break;
        for(int j=0;j<N;j++)
        {
            scanf("%lld",&A[j]);
        }
        x=A[0];
        for(int i=1;i<N;i++)
        {
            x=x^A[i];
        }
        if(x==0)
        printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
