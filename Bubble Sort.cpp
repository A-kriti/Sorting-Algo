#include <bits/stdc++.h>

using namespace std;

vector<int> bubblesort(vector<int>v){
    
    int counter=0;
    int n=v.size();
    
    while(counter<n){
        
        for(int i=0;i<n-counter-1;i++){
            if(v[i]>v[i+1]){
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
        }
        counter++;
    }
    
    return v;
}

int main()
{
    // int n=9;
    // vector<int>v={8,6,0,4,2,7,1,33,14};
    int n;
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int>soreted_v=bubblesort(v); 
    
    for(int i=0;i<n;i++){
        cout<<soreted_v[i]<<" ";
    }
    
    return 0;
}


// Worst and Average Case Time Complexity: O(n*n). The worst-case occurs when an array is reverse sorted.
// Best Case Time Complexity: O(n). The best-case occurs when an array is already sorted.
// Auxiliary Space: O(1)
