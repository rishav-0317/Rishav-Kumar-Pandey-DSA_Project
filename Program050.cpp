//Loops in vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={'a','b','c','d','e'};
    for(char i:vec){
        cout<<i<<"\n";
    }
    return 0;
}