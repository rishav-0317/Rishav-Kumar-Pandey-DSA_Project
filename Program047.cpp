#include<iostream>
using namespace std;
int linear(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[20],sz,target;
    cout<<"Enter the size of array: ";
    cin>>sz;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to be searched: ";
    cin>>target;
    cout<<"Elements found on index "<<linear(arr,sz,target)<<"\n";
    return 0;
}
