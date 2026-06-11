//Binary Search.TC=O(log n).
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr , int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(tar>arr[mid]){
            st=mid+1;//2nd half
        }else if(tar<arr[mid]){
            end=mid-1;//first half
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={-1,0,3,4,5,9,12};//odd
    int target1=12;

    cout<<binarySearch(arr1,target1)<<endl;

    vector <int> arr2 = {-1,0,3,5,9,12};//even
    int target2=0;

    cout<<binarySearch(arr2,target2)<<endl;



    return 0;
}