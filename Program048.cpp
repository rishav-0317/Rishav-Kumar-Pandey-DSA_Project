//Reverse elements in an array.
#include<iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int start = 0 ,end = sz-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int arr[10],sz;
    cout<<"Enter the size of an array: ";
    cin>>sz;
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }
    reverseArray(arr,sz);

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}