#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n)
{
    int comp=0;
    int swaps=0;
    int i,j,k;
    
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            comp++;
            if(a[j]<a[k])
            {
                
                k=j;
            }
        }

        swaps++;
        comp--;
        swap(a[i],a[k]);
    }

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    
    cout<<"\n";

    cout<<"comparisons"<<"="<<comp<<"\n";
    cout<<"swaps"<<"="<<swaps<<"\n";
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
        
        selectionsort(arr,size);
    }
    
    return 0;
}