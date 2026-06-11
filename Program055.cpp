//Find the maximum sum of a subarray in an array
#include<iostream>
using namespace std;
int main(){
    int n,arr[10];
    cout<<"ENter the size of an array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<"Max subarray Sum: "<<maxSum<<endl;
    return 0;
}//brute force approach O(n^2)