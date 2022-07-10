#include <bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int r){
    
    int pivot=r-1;
    int i=l-1;

    for(int j=l;j<pivot;j++){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[i+1],arr[pivot]);
    return i+1;
}

void QuickSort(int arr[],int l,int r){
    
    if(l<r){
        int p=partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
    }
}


using namespace std;

int main()
{
    int arr[]={3,8,0,6,3,4};
    int n=6;
    
    QuickSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
