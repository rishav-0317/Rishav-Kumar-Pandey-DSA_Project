//Print character using ASCII value.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int a=ch;
    if(a>=65 && a<=90)
    {
        cout<<"Upper\n";
    }
    else{
        cout<<"lower\n";
    }
    return 0;
}