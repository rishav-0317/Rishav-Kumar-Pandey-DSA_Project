//Inbuilt Function in vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(25);
    vec.push_back(985);
    cout<<vec.size()<<endl;
    vec.pop_back();


    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;

    for(int i:vec){
        cout<<i<<endl;
    }
    return 0;
}