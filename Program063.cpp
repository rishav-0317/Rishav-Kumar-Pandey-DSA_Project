//Calculate x raised to the power n (x^n) using fast exponentiation method
#include<iostream>
using namespace std;
int main(){
    double x;
    int n;
    cin>>x>>n;
    long binForm=n;
    if(n<0){
        x=1/x;
        binForm = -binForm;
    }
    double ans=1;
    while(binForm>0){
        if(binForm%2 == 1){
            ans = ans*x;
        }
        x = x*x;
        binForm /=2;
    }
    cout<<ans<<endl;
    return 0;
}