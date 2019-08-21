#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,r=0;
    printf("enter any number");
    scanf("%d",&a);

    while (a>0)
    {
        r = r*10  + a%10;
        a = a/10;
    }
    printf("reverse of the above num = %d",r);
    return 0;
}
