//Find the maximum profit that can be made by buying and selling a stock given an array of stock prices where the i-th element represents the price of the stock on day i
#include<iostream>
using namespace std;
int main()
{
    int n;
    int price[]={7,1,5,3,6,4};
    n = sizeof(price)/sizeof(price[0]);
    int maxPrice = 0;
    int bestBuy= price[0];
    for(int i=1;i<n;i++){
        if(price[i]>bestBuy){
            maxPrice=max(maxPrice,price[i]-bestBuy);

        }
        bestBuy=min(bestBuy,price[i]);
    }
    cout<<maxPrice<<endl;
    return 0;
}