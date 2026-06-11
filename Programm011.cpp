//Print the sum of odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==1){
            sum +=i;
        }
    }
    cout<<sum<<endl;
}