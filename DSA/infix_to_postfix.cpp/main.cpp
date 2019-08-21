#include<stdio.h>
#include<stdlib.h>
#include<string>

char stack[100],top = -1;

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
    if(x=='(')
        return 0;
    if(x == '+' || x =='-')
        return 1;
    if(x == '*' || x =='/' || x=='%' || x =='$')
        return 2;
}

int main()
{
    char exp[200];
    char *e,x;
    printf("---------------infix to postfix conversion--------------\n\n");
    printf("\nYou can symbols like $ % * + - / in the expression\n");
    printf("Enter the expresion :: ");
    scanf("%s",exp);
    e = exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e =='(')
        {
            push(*e);
        }
        else if(*e == ')')
        {
            while( (x = pop()) !='(')
            {
                printf("%c",x);
            }
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
            {
                printf("%c",pop());
            }
            push(*e);

        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }

    return 0;
}
