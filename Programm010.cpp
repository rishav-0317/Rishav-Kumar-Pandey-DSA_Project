//Sum form 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}