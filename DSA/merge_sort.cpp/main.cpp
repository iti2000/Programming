#include <iostream>

using namespace std;

void Print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i] <<" " ;
    }
}

void merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];
    //making two separate arrays
    for(i=0;i<n1;i++)
    {
        L[i]=a[l+i];

    }
    for(j=0;j<n1;j++)
    {
        R[j]=a[m+j+1];

    }

    i=0;
    j=0;
    k=l;
    //comparing every array
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}


void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        merge_sort(a,l,m);
        merge_sort(a,m+1,r);

        merge(a,l,m,r);
    }
}


int main()
{
    cout << "---------Merge Sort---------" << endl;
    int arr[]={23,78,45,1,80,80,90,55,6,89};
    int n=sizeof(arr)/sizeof(*arr);

    cout<<"Before Sort : "<< endl;
    Print(arr,n);

    merge_sort(arr,0,n-1);

    cout <<endl<<"After Sort: "<<endl;
    Print(arr,n);


    return 0;
}
