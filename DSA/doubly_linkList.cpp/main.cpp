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
    if(L==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        cout << "enter the value to be deleted :";
        cin >> x;
        temp = L;
        while(temp->data!= x)
        {
            next = temp->r;
            prev = temp;
            temp->data = next->data;
            next = temp;
        }
        delete temp;
        next->r = temp;
        next->l = prev;
        prev->r = temp;
        temp->l = prev;
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
