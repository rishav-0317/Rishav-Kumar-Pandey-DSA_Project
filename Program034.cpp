//Show what is pass by value.
#include<iostream>
using namespace std;
//pass by value
int sum(int a, int b){
    int s=a+b;
    return s;
}
int main(){
    int x=10;
    int y=11;
    cout<<sum(x,y)<<"\n";
    return 0;
}