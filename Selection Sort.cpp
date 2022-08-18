#include <bits/stdc++.h>

using namespace std;

void SelectionSort(vector<int>&v){
    
    int n=v.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        
        swap(v[i],v[min]);
    }
}

int main()
{
    vector<int>v={6,1,8,0,3};
    SelectionSort(v);
    
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
