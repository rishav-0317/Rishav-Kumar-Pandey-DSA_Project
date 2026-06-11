//Given an array of integers, return an array where each element at index i is the product of all the numbers in the original array except the one at index i. Solve this problem without using division and in O(n) time complexity.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums={1,2,3,4};
    int n = nums.size();
    vector <int> ans(n,1);
    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                prod*=nums[j];
            }
        }
        ans[i]=prod;
        
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    

}//Brute force method.