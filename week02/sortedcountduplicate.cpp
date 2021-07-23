#include<iostream>
#include<cmath>
using namespace std;

void duplicatecount(int a[],int n,int key)
{
    int j;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(a[i]==key)
        {
            j=i+1;

            while(a[j]==key)
             j++;
            
            cout<<key<<"-"<<j-i;
        }
    }

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

        duplicatecount(a,n,key);
        
       
    }
}

