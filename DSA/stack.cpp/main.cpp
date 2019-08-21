#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
void change();
void peep();
int stack[100],n,x,t;
int top=-1;
int i,temp,rep;
int main()
{
    t=0;
    while(t!=6)
    {
        printf("-----------stack----------\n");
        printf("\n1.push \n2.pop \n3.display \n4.peep\n5.change\n");
        printf("\nenter the number to perform the task\n");
        scanf("%d",&t);


        switch(t)
       {
        case 1:
           {
            push();
            break;
           }
        case 2:
           {
            pop();
            break;
           }
        case 3:
            {display();
            break;
            }
        case 4:
            {peep();
            break;
            }
        case 5:
            {change();
            break;
            }
        case 6:
            {printf("EXICT POINT");
            break;
            }
        default:
            {printf("enter valid number");
            break;
            }
        }
    }

    return 0;
}
void push()
{
    if (top>=100)
    {
        printf("\nstack is overflow\n");

    }
    else
    {
        printf("\nenter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }


}
void pop()
{
    if(top<=-1)
    {
       printf("\nstack is under flow\n");
    }
    else
    {
        printf("\nThe popped element in the stack is: %d \n",stack[top]);
        top--;
    }

}
void display()
{
    if(top>=0)
    {
        printf("\nThe values in the stack are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
     {
            printf("\nstack is empty\n");
     }



}
void peep()
{
    if(top<0)
    {
        printf("\nstack is under flow\n");
    }
    else
    {
        printf("\nEnter the nth element of array you want to see\n");
        scanf("%d",n);
        if(n<=top)
        {
            printf("\n %d is that nth element\n ",stack[n]);
        }
        else
        {
            printf("\n element does not exist in the stack\n");
        }
    }

}
void change()
{
    printf("\n enter the nth element you want to change\n");
    scanf("%d",temp);
    if(top<0)
    {
        printf("stack is under flow\n");
    }
    else
    {
        if(temp<=top)
        {
            printf("\nenter the element you want to replace\n");
            scanf("%d",rep);
            stack[temp]==rep;
            printf("\n.........element is replaced\n");
        }

    }
}
