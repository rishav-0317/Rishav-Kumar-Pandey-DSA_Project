//Alternate method to check prime number.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
     bool isPrime=true;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime NUmber"<<endl;
    }
    else{
        cout<<"Non-Prime"<<"\n";
    }
    return 0;
}