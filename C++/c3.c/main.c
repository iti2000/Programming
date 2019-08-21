#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,c;
    a=1;
    b=1;
    printf("enter any number:");
    scanf("%d",&n);
    printf("%d%d",a,b);
    c=a+b;
    printf("%d",c);
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }

    return 0;
}
