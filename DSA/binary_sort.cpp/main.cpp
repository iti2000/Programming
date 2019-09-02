#include <iostream>

using namespace std;

int binary_search(int arr[],int l,int h,int x)
{
    if(h>=l)
    {
        int mid = l +(h-l)/2;

        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]>x)
        {
            return binary_search(arr,l,mid-1,x);
        }
        if(arr[mid]<x)
        {
            return binary_search(arr,mid+1,h,x);
        }
    }
    return -1;
}

int main()
{
    cout << "----------Binary Sort--------" << endl;
    int arr[]={23,45,67,86,88,90,95};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 23;
    int result = binary_search(arr,0,n-1,x);
    (result==-1)?cout<<endl<<"Element is not present":cout<<"Element is present at index:"<<result;
    return 0;
}
