//Binary Search using Recursion.
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> arr, int tar,int st,int end){
    if(st<=end){
        int mid = st + (end-st)/2;

        if(tar> arr[mid]){
            return binarySearch(arr , tar, mid+1,end);
        }else if(tar<arr[mid]){
            return binarySearch(arr,tar,st,mid-1);

        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={-1,0,3,4,5,9,12};//odd
    int target1=12;

    cout<<binarySearch(arr1,target1,0,arr1.size()-1)<<endl;

    vector <int> arr2 = {-1,0,3,5,9,12};//even
    int target2=0;

    cout<<binarySearch(arr2,target2,0,arr2.size()-1)<<endl;



    return 0;
}