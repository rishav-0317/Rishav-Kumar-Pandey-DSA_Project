//Given an array of integers representing the heights of vertical lines on a graph, find the maximum area of water that can be contained between two lines. The area is calculated as the width between the two lines multiplied by the height of the shorter line.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int ans=0;
    int n=height.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int width = j-i;
            int ht = min(height[i],height[j]);
            int currWater = width * ht;

            ans = max(ans,currWater);
        }
    }
    cout<<ans<<endl;
    return 0;
}//brute force method.