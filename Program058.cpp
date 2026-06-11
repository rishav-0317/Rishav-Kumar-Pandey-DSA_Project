//for sorted array.
//Find the indices of the two numbers in an array that add up to a given target
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>ans;
    vector<int>vec(n);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int target;
    cout<<"ENter the target: ";
    cin>>target;
    int i=0;
    int j=n-1;

    while(i<j){
        int pairSum=vec[i]+vec[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
        }
    }
    cout<<ans[i]<<", "<<ans[j]<<endl;
    return 0;
}