//Lower case or upper case.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"LowerCase"<<endl;

    }
    else{
        cout<<"UpperCase"<<endl;
    }
    return 0;
}