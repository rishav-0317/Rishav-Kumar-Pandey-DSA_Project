#include<iostream>
using namespace std;
int main()
{
    int i;
    float f;
    char c;
    double d;
    long int il;
    short int si;
    bool b;
    unsigned int ui;
    cout<<"Data types and their sizes:\n\n";
    cout<<"int:  "<<sizeof(i)<<" bytes"<<endl;
    cout<<"float:  "<<sizeof(f)<<" bytes"<<endl;
    cout<<"char:  "<<sizeof(c)<<" bytes"<<endl;
    cout<<"doulble:  "<<sizeof(d)<<" bytes"<<endl;
    cout<<"long int:  "<<sizeof(il)<<" bytes"<<endl;
    cout<<"short int:  "<<sizeof(il)<<" bytes"<<endl;
    cout<<"boolean:  "<<sizeof(b)<<" bytes"<<endl;
    cout<<"unsigned int:  "<<sizeof(ui)<<" bytes"<<endl;
    return 0;
}