//Mountain Array. O(log n).
#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector <int> A){
        int n=A.size();
        int st=1,end=n-2;

        while(st<=end){
                int mid = st + (end-st)/2;
                if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
                        return mid;
                }else if(A[mid-1]<A[mid]){
                        st=mid+1;
                }else{
                        end = mid-1;
                }
        }

        return -1;
}
int main(){
        vector <int> arr={0,3,8,9,5,2};
        cout<<peakIndexInMountainArray(arr)<<endl;
        return 0;

}