#include <stdio.h>
#define size 5
void Insert();
void Delete();
void Display();
int queue[size],val,n;
int front = -1;
int rear= -1;


int main()
{
    while(n!=4)
    {
        printf("\n -------------circular Queue--------------\n");
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.exit \n");
        printf("\n\n Enter any value : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            break;
        default:
            printf("\n Enter the valid value\n");
            break;

        }


    }
        return 0;
}

void Insert()
{
    if((front==0 && rear == size-1) || (front == rear +1)) //in second condition we have deleted the element hence it is consider as full
    {
        printf("\n Queue is FULL \n");
        return;

    }
    else if(rear == -1)
    {
        rear++;
        front++;
    }
    else if(rear == size-1 && front >0) //in this front is 3 and rear is last hence to fill next element rear should be 0
    {
        rear = 0;

    }
    else
    {
        rear++;
    }
    printf("\n Enter the value to be inserted :\n");
    scanf("%d",&val);
    queue[rear] = val;
}
void Delete()
{
    if(front==-1)
    {
        printf("\n Queue is Empty \n");
    }
    else if(front == rear)
    {
        printf("\n %d is deleted\n",queue[front]);
        front = -1;
        rear = -1;
    }
    else if(front == size-1)
    {
        printf("\n %d is deleted \n",queue[front]);
        front = 0;
    }
    else
    {
        printf("\n %d is deleted\n",queue[front]);
        front++;
    }
}
void Display()
{
    int i;
    if(front > rear) //we have already deleted some value hence front is > 0 and > than rear
    {
        for(i=front;i<size;i++)
        {
            printf("\n %d",queue[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("\n %d",queue[i]);
        }
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n %d",queue[i]);
        }
    }
}
