#include <bits/stdc++.h>

using namespace std;

void insert(vector<int>&v,int temp){
    
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    return;
}

void sort(vector<int>&v){
    
    if(v.size()==0){
        return;
    }
    
    int temp=v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
    return;
}

int main()
{
    vector<int>v={4,2,6,3,1};
    sort(v);
    for(int x:v)
        cout<<x<<" ";

    return 0;
}
