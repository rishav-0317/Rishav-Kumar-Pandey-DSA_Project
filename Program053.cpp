//Given an array of integers, every element appears twice except for one. Find that single one.
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> vec){
    int ans=0;
    for(int val: vec){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int>vec={4,1,2,1,2};
    cout << singleNumber(vec) << endl;
    
    
    
    
    
    return 0;
}