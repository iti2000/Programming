#include <iostream>

using namespace std;

int i,j,n;

void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void bubble_sort(int array[], int n)
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}
void display(int array[],int n)
{
    for(j=0;j<n;j++)
    {
        cout << array[j]<<" ";
    }

}

int main()
{
    cout << "-----------------bubble sort-----------------" << endl;
    int array[100];
    cout<<"Enter the size of array:";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    bubble_sort(array,n);
    display(array,n);
    return 0;
}
