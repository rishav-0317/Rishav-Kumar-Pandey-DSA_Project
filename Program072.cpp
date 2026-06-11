//Search in Rotated Sorted Array.
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr , int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(arr[mid]==tar){
            return mid;
        }
        //left half is sorted.
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && tar<=arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            //right half is sorted.
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr1={4,5,6,7,0,1,2};//odd
    int target1=0;

    cout<<binarySearch(arr1,target1)<<endl;

    vector <int> arr2 = {4,5,6,7,8,9,0,1,2};//even
    int target2=3;

    cout<<binarySearch(arr2,target2)<<endl;
    return 0;
}