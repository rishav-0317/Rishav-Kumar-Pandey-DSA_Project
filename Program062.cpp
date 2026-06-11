//Find the majority element in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={1,2,2,1,1};
    int n=vec.size();
    int feq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(feq==0){
            ans=vec[i];
        }
        if(ans == vec[i]){
            feq++;
        }else{
            feq--;
        }
    }
    int count =0;
    for(int val:vec){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2){
       cout<<ans<<endl;  
    }else{
        cout<<-1<<endl;
    }
    return 0;
}