#include <bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int mid,int r){
    
    int n1=mid-l+1;
    int v1[n1];
    int n2=r-mid;
    int v2[n2];
    
    for(int i=0;i<n1;i++){
        v1[i]=arr[l+i];
    }
    
    for(int i=0;i<n2;i++){
        v2[i]=arr[mid+1+i];
    }
    
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(v1[i]>v2[j]){
            arr[k]=v2[j];
            k++;
            j++;
        }
        else{
            arr[k]=v1[i];
            k++;
            i++;
        }
    }
    
    while(i<n1){
        arr[k]=v1[i];
        k++;
        i++;
    }
    
    while(j<n2){
        arr[k]=v2[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[],int l,int r){
    
    if(l<r){
        int mid=(l+r)/2;
    
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
    
}

int main()
{
    int arr[]={3,8,6,3,4};
    int n=5;
    
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
