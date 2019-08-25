#include <iostream>

using namespace std;
int i,j,mi;

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

void selection_sort(int array[],int n)
{
    for(i=0;i<n;i++)
    {
        mi = i;
        for(j=i+1;j<n;j++)
        {
            if(array[mi]>array[j])
            {
                mi = j;
            }
        }
        swap(&array[mi],&array[i]);
    }
}

void display(int array[],int n)
{
    for (i=0;i<n;i++)
    {
        cout << array[i] <<" ";
    }
}
int main()
{
    cout << "---------------selection sort-------------" << endl;
    int array[100],n;

    cout <<"enter size of array : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }

    cout << n <<endl;
    selection_sort(array,n);
    cout<<"sorted:";
    display(array,n);

    return 0;
}
