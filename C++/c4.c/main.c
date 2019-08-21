#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n=1,add=0;
    printf("enter any num:");
    scanf("%d",&a);
    b=a/2;
    while(n<=b)
    {
        if(b%n==0)
        {
            add=add +n;
            n++;
        }
    }
    printf("%d",add);
    return 0;
}
