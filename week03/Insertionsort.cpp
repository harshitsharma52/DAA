#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    int comp=0;
    int shifts=0;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=a[i];

        while(j>-1 && a[j]>x)
        {
            comp++;
            shifts++;
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=x;
        shifts++;
    }

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";

    cout<<"comparisons"<<"="<<comp<<"\n";
    cout<<"shifts"<<"="<<shifts<<"\n";
}







int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        
        insertionsort(arr,size);
    }
    
    return 0;
}