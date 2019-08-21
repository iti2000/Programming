#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=1;
    printf("enter the num:");
    scanf("%d",&a);
    while(b<=a)
    {
        if(a%b==0)
        {
            printf("%d",b);

        }
        b++;
    }


    return 0;
}
