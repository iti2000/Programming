#include <iostream>

using namespace std;

int ssort(int arr[],int x,int n)
{
        for(int i=0;i<x;i++)
        {
            if(arr[i]==n)
                    return i;
        }
        return -1;
}

int main()
{
    cout << "---------Sequential Sort---------" << endl;
    int arr[100];
    int x,n;
    cout << "Enter the size of array:";
    cin >> x;
    cout << "Enter the elements: "<<endl;
    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter the number to be searched:";
    cin >> n;
    int result = ssort(arr,x,n);
    (result==-1)?cout<<endl<<"Element not present":cout<<endl<<"Element is present at index:"<<result;

    return 0;
}
