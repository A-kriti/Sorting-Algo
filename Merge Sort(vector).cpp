


#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums,int left,int mid,int right){
        
        
        int i=left;
        int j=mid+1;
        vector<int>temp;
        
        while(i<=mid && j<=right){
            if(nums[i]>nums[j]){
                temp.push_back(nums[j]);
                j++;
            }
            else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        
        while(j<=right){
            temp.push_back(nums[j]);
            j++;
        }
        
        for(int i=left;i<=right;i++){
            nums[i]=temp[i-left];
        }
            
    }
    
    void mergesort(vector<int>& nums,int left,int right){
        
        if(left<right){
            int mid=(left+right)/2;
            mergesort(nums,left,mid);
            mergesort(nums,mid+1,right);
            
            merge(nums,left,mid,right);
        }
        
    }
    

int main()
{
    int n=7;
    vector<int>nums={4,2,6,0,1,3,2};
    mergesort(nums,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}
