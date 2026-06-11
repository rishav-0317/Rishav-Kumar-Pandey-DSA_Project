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
    cout<<ans<<endl;
    return 0;
}