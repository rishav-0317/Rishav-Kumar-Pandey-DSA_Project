//Find the majority element in an array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,2,1,2};
    int n=vec.size();
   
    sort(vec.begin(),vec.end());
    int feq=1;
    int ans = vec[0];
    for(int i=1;i<n;i++){
        if(vec[i] == vec[i-1]){
            feq++;
        }else{
            feq=1;
            ans=vec[i];
        }
        if(feq>n/2){
            cout<<ans<<endl;
        }
    }
    return 0;

}