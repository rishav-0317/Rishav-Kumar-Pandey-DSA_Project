#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<=n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
        if(largest<arr[i]){
            largest=arr[i];
         }
    }
    cout<<smallest<<"\n";
    cout<<largest<<'\n';
    return 0;
}