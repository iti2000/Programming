#include <iostream>
using namespace std;
int x;
struct list
{
    int data;
    list *l;
    list *r;
};

list *L= NULL,*R = NULL,*temp,*prev,*next;

void insert(int x)
{
    temp = new list;
    temp->data = x;
    temp->l = temp->r = NULL;
    L = R = temp;
}
void insertright(int x)
{
    if(L == NULL && R == NULL)
    {
        insert(x);
        return;
    }
    else
    {
       temp = new list;
       R->r = temp;
       temp->l = R;
       temp->data = x;
       temp->r = NULL;
       R = temp;
    }
}
void insertleft(int x)
{
    if(L == NULL && R == NULL)
    {
        insert(x);
        return;
    }
    else
    {
        temp = new list;
        L->l = temp;
        temp->r = L;
        temp -> data = x;
        L = temp;
        L->l = NULL;
    }
}

void display()
{
    if(L==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
       temp = L;
       while(temp != NULL)
       {
           cout << temp->data << " ";
           temp = temp->r;
       }
       cout << endl;
    }
}
void del()
{
    temp = L;

    if(L==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        cout<<"Enter the number to be deleted :";
        cin >> x;
        while(temp!=NULL)
        {
          if(temp->data == x)
          {
            if(temp->r==NULL && temp->l==NULL)
            {
            delete temp;
            L == NULL;
            return;
            }
           if(temp->l==NULL )
           {
            next = temp->r;
            next->l =NULL;
            L = next;
            return;
           }
           if(temp->r == NULL)
           {
            next = temp->l;
            next->r = NULL;
            R = next;
            return;
           }
           if(temp->l!=NULL && temp->r!=NULL)
           {
            prev=temp->l;
            prev->r = temp->r;
            return;
           }
          }
        temp = temp->r;
        }
    }
}


int main()
{
    int n,d;
    while(n!=5)
    {
        cout << "-----------------Doubly Link List----------------" << endl << endl;
        cout << "1. Insert Right " << endl;
        cout << "2. Insert Left " << endl;
        cout << "3. Delete " << endl;
        cout << "4. Display " << endl;
        cout << "5. Exit " << endl;
        cout << "Enter the value to perform task :" ;
        cin >> n;
        switch(n)
        {
        case 1 :
            cout << endl <<"Enter the value to be inserted :";
            cin >> d;
            insertright(d);
            break;
        case 2:
            cout << endl <<"Enter the value to be inserted : ";
            cin >> d;
            insertleft(d);
            break;
        case 3:
            del();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default :
            cout << "Enter the valid number" << endl;
        }
    }
    return 0;
}
