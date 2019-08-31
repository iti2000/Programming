#include <iostream>

using namespace std;

int i,j;

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Partition(int arr[],int l,int r)
{
    int p = arr[l];
    i = l;
    j = r;
    while(i<=j)
    {
        do
          i++;
        while(arr[i]<=p);

        while(arr[j]>p)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }

    }
    swap(&arr[l],&arr[j]);
    return j;

}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        j = Partition(arr,l,r);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,r);
    }

}
void print_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main()
{
    cout << "-----Quick sort--------" << endl;
    int arr[]={10,16,8,12,15,6,3,9,5};
    int n = sizeof(arr)/sizeof(*arr);
    quick_sort(arr,0,n-1);
    print_sort(arr,n);

    return 0;
}
