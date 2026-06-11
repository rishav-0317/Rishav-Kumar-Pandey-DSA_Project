//Find the majority element in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>vec(n);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int val : vec){
        int feq = 0;

        for(int el : vec){
            if(el == val){
                feq++;
            }
        }
        if(feq>n/2){
            cout<<val<<"\n";
        }
    }
    return 0;
}