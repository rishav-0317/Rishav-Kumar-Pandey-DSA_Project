//Given an array of integers representing the heights of vertical lines on a graph, find the maximum area of water that can be contained between two lines. The area is calculated as the width between the two lines multiplied by the height of the shorter line.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int n= height.size();
    int lp=0,rp=n-1;
    int ans=0;
    while(lp<rp){
        int width = rp-lp;
        int ht = min(height[lp],height[rp]);
        int currWater = width*ht;
        ans = max(ans,currWater);
        height[lp]<height[rp]?lp++:rp--;
    }
    cout<<ans<<endl;
    return 0;
}