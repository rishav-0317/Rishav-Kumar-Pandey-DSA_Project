//Check prime number using Function.
#include<iostream>
using namespace std;
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cout<<"Enter a  number: ";
    cin>>a;
    if(isPrime(a)){
        cout<<"Prime\n";
    }else{
        cout<<"Non-Prime\n";
    }
    return 0;
}