#include<iostream>
#include<cmath>
using namespace std;
int c=0;
int jumpsearch(int a[],int n,int key)
{
    int left=0;
    int right=sqrt(n);

    while(a[right]<=key && right< n)  //not right block
    {
        c++;
        left=right;
        right+=sqrt(n);

        if(right > n-1)  //after line 13 if right is > then size of array
         right=n;
    }

    for(int i=left;i<right;i++)  //search in right block
    {
        c++;
        
        if(a[i]==key)
         return i;
         

    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
         cin>>a[i];

        int key;
        cin>>key;
        int x;
        
        if((x=jumpsearch(a,n,key))==-1)
         cout<<"not present "<<c;
        else
         cout<<"present "<<  c;
    }
}

