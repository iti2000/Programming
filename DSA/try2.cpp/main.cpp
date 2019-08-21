#include<string>
#include<stdlib.h>
#include<stdio.h>

char stack[200],exp[200],*e,x;
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;

}
char pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }

}
int priority(char x)
{
    if(x == '(')
        return 1;
    if(x == '+' )
        return 2;
    if(x == '-')
        return 3;
    if(x == '*')
        return 4;
}
int main()
{
    printf("----------infix to postfix----------");
    printf("enter the expression:");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e== '(')
        {
            push(*e);
        }
        else if(*e ==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);
            }

        }
        else
        {
            while(priority(stack[top])>=priority(*e))
            {
                printf("%c",pop());
            }
            push(*e);

        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
    return 0;

}
