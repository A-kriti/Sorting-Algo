// Constraints:
// 1 <= N <= 10^6
// 1 <= arr[i] <= 10^6

#include <bits/stdc++.h>

using namespace std;

vector<int>sort(int v[],int n){
    int a[1000005];
    vector<int>ans;
    for(int i=0;i<1000000;i++){
        a[i]=0;
    }
    
    for(int i=0;i<n;i++){
        a[v[i]]++;
    }
    
    for(int i=0;i<1000000;i++){
        
        if(a[i]>0){
            for(int j=0;j<a[i];j++)
                //cout<<i<<" ";
                ans.push_back(i);
        }
    }
    
    return ans;
}
int main()
{
    
    int v[]={5,2,3,5,1};
    int n=sizeof(v)/sizeof(v[0]);
    
    vector<int>ans=sort(v,n);
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
