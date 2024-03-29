#include <bits/stdc++.h>

using namespace std;

vector<int> Insertion_Sort(vector<int>v){
    
    int n=v.size();
    for(int i=1;i<n;i++){
        int curr=v[i];
        int j=i-1;
        while(v[j]>curr && j>=0){
            v[j+1]=v[j];
            j--;
        }
        
        v[j+1]=curr;
    }
    return v;
}


void InsertionSort(vector<int>&v){
    
    int n=v.size();
    for(int i=0;i<n;i++){
        int j=i;
        int temp=v[i];
        while(j>0 && v[j-1]>temp){
            v[j]=v[j-1];
            j--;
        }
        
        v[j]=temp;
    }
}

int main()
{
    vector<int>v={5,1,3,0,2};
    vector<int>v1=Insertion_Sort(v);
    
    for(int x:v1)
    cout<<x<<" ";

    return 0;
}
