#include<iostream>
using namespace std;
int decimal(int n){
    int ans=0,pow=1;
    while(n>0){
        int rem =n%10;
        ans+=rem*pow;
        n=n/10;
        pow*=2;
    }
    return ans;
}
int main(){
    cout<<decimal(101)<<endl;
    return 0;
}