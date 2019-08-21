#include <stdio.h>
#include <conio.h>
void push();
void pop();
void display();
int q[100],rear=-1,front=0,i,temp;
int main()
{

    int t=0,n;
    while(t!=4)
    {
        printf("\n------------Queue----------\n");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.EXICT \n");
        printf("\n Enter the number to perform the task : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:

            break;
        default:
            printf("\n Enter a valid number\n");
        }
    }

    return 0;
}
void push()
{
    if(rear>=100)
    {
        printf("\n Queue is overflow.\n");
    }
    else
    {
        rear = rear +1;
        printf("\n Enter the value to be pushed\n");
        scanf("%d",&temp);
        q[rear]=temp;

    }
}
void pop()
{
    if(rear>=front)
    {
        printf("\n the popped value is:%d",q[front]);
        for(i=0;i<rear;i++)
        {
            q[i]=q[i+1];
        }
        rear = rear -1;

    }
    else
    {
        printf("\n Queue is empty\n");
    }
}
void display()
{
    if(rear<front)
    {
        printf("\n Queue is empty \n");
    }
    else
    {
        for(i=0;i<=rear;i++)
        {
            printf("\n %d \n",q[i]);
        }
    }
}
