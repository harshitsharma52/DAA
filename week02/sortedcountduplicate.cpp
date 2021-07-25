#include<iostream>
using namespace std;
int  Binary_search(int arr[], int left,int right,int key)
{

    
    if(right >= left)
    {
        int m = (left+right)/2;
        if(arr[m] == key)
         return m;
        
        if(arr[m] > key)
            return Binary_search(arr,left,m-1,key);
        else  
            return Binary_search(arr,m+1,right,key);
    }
    else
        return -1;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int result = Binary_search(arr,0,n-1,key);
     
        if(result >= 0)
        {
            j=result+1;
            while(arr[j]==key)
             j++;
            
            cout<<key<<"-"<<j-result<<"\n";
        }
        else
            cout<<"Not Present "<<"\n";
            j=0;
    }
    return 0;
}

