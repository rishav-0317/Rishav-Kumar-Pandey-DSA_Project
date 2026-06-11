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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}