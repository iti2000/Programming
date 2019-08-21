#include<iostream>
using namespace std;

struct list
{
    int data;
    list *next;
};

list *ptr=NULL;
list *head= NULL;
list *temp,*prev;
int d;

void insert(int d)
{
    if(head==NULL)
    {
        ptr = new list;
        head = ptr;
    }
    else
    {
        ptr->next = new list;
        ptr = ptr->next;
    }
    ptr->data = d;
    ptr->next = NULL;
}

void display()
{
   list *pr;
   pr = head;
   cout <<  endl;
   if(pr==NULL)
    {
    cout << "Linked list is empty" << endl;
    }
   else{
    while (pr != NULL)
    {
      cout<< pr->data <<" ";
      pr = pr->next;
    }
   }
}
void del(int x)
{
    if(ptr == NULL)
    {
        cout << "Linked List is Empty.." << endl;
    }
    else
    {
        temp = head;
        if(temp!=NULL && temp->data == x)
        {
            head = temp->next;
            delete temp;
            return;
        }
        while(temp!=NULL)
        {
            if(temp->data == x)
            {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

}
void reverse()
{
    if(ptr == NULL)
    {
        cout << "Linked List is Empty.." << endl;
    }
    else
    {
        temp = head;
        ptr = prev = NULL;
        while(temp!=NULL)
        {
            ptr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = ptr;
        }
        head = prev;

    }
}
bool checklist(int x)
{
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data == x)
        {
            cout << "present............" << endl;
            return true;
        }
        temp = temp->next;
    }
    cout << "Not Present..........." << endl;
    return false;
}
void search(int x)
{
    if(checklist(x))
    {
        cout << endl << "the location is :" << temp << endl;

    }
    else
    {

        cout<< endl << "location not found.." << endl;
    }
}
void sort()
{
    temp = head;
    while(temp!= NULL)
    {
        ptr = temp;
        while(ptr!= NULL)
        {
            if(ptr->data < temp->data)
            {
                d = temp->data;
                temp->data = ptr->data;
                ptr->data = d;
            }
           ptr = ptr->next;
        }
    temp = temp->next;
    }
}

int count()
{
    d = 0;
    temp = head;
    while(temp!=NULL)
    {
        d++;
        temp = temp->next;
    }
    return d;
}
void deleteall()
{
    temp = head;
    while(temp!=NULL)
    {
        prev = temp;
        temp = temp->next;
        delete prev;
    }
    head = ptr = NULL;
}
void InsertFirst(int x)
{
    if(head==NULL)
    {
        head->data = x;
        head->next = NULL;
    }
    else
    {
        ptr = new list;
        ptr->data = x;
        ptr->next = head;
        head = ptr;
    }
}
main()
{
  int choice=0,d,n;
  while(choice!=9)
  {
    cout << endl << endl << "-----Linked List-----" << endl;
    cout << "0. Display" << endl;
    cout << "1. Insert Value" << endl;
    cout << "2. Delete value" << endl;
    cout << "3. Insert at First" << endl;
    cout << "4. Reverse" <<endl;
    cout << "5. Check List" << endl;
    cout << "6. search " << endl;
    cout << "7. Count " << endl ;
    cout << "8. Sort " << endl;
    cout << "9. Delete all elements " << endl;


    cout << "Enter your choice : ";
    cin >> choice;

    switch(choice)
    {
    case 0:
        display();
        break;
    case 1:
        cout << "Enter the value you want to insert : " << endl;
        cin >> d;
        insert(d);
        break;
    case 2:
        cout << "enter the value to be deleted : "<< endl;
        cin >>d;
        del(d);
        break;
    case 3:
        cout << "Enter the value to be inserted at first : " << endl;
        cin >> d;
        InsertFirst(d);
        break;
    case 4:
        reverse();
        break;
    case 5:
        cout << "Enter the value to be checked : " << endl;
        cin >> d;
        checklist(d);
        break;
    case 6:
        cout << "Enter the element to be searched : " << endl;
        cin >> d;
        search(d);
        break;
    case 7:
        cout <<"Total elements in the Link List are :"<<count() << endl;
        break;
    case 8:
        sort();
        break;
    case 9:
        deleteall();
        break;
  }
}

}
