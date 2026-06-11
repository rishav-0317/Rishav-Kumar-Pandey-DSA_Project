//Given an array of integers, return an array where each element at index i is the product of all the numbers in the original array except the one at index i. Solve this problem without using division and in O(n) time complexity.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    vector<int>ans(n,1);
    //prefix
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    //suffix
    int suffix = 1;
    for(int i=n-2;i>=0;i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}