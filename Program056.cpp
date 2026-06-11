//Find the maximum sum of a subarray in an array
#include<iostream>
using namespace std;
int main(){

    int n,arr[10];
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<"Enter the numbers of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;





//Kadane's Rule O(n)






    return 0;
}