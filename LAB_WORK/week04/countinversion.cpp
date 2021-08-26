 

#include <iostream>

using namespace std;

int merge(int arr[],int temp[],int low,int mid,int high,int &comp,int &ans )
{
    int i,j,k;

    i=low; //index for left subarray
    j=mid;  //index of right subarray
    k=low;  // index of merged array

    while(i<=mid-1 && j<=high)
    {
        if(arr[i] <= arr[j] )
        {
            comp++;
            temp[k++]=arr[i++];
        }
        else{
            comp++;
            temp[k++]=arr[j++];

            ans+=(mid-i);
        }

    }


    while(i<=mid-1)
    {
        temp[k++]=arr[i++];
    }
    
     while(j<=high)
    {
        temp[k++]=arr[j++];
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i];
    }


}

int mergesort(int arr[],int temp[],int low,int high,int &comp,int &ans)
{
    int mid,count_inv=0;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,temp,low,mid,comp,ans);
        mergesort(arr,temp,mid+1,high,comp,ans);
        
        merge(arr,temp,low,mid+1,high,comp,ans);
    }
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
        int temp[size];
        int comp=0;
        int ans=0;
        
        for(int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,temp,0,size-1,comp,ans);
        cout<<"no of inversions"<<ans<<"\n";
        cout<<"comparisons="<<comp<<"\n";
        
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"\t";
        }
        
    }
}
