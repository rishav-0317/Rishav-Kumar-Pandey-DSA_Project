#include<iostream>
using namespace std;
int sum_Digits(int n){
    int sum=0;
    while(n>0){
        int digits=n%10;
        sum+=digits;
        n=n/10; 
    }
    return sum;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<sum_Digits(a)<<"\n";
    return 0;
}