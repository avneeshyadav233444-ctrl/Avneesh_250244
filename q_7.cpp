#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
        int temp;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            temp = nums[i];
            nums[i] = temp*temp;
        }
        for(int i = 0; i<(n-1); ++i){
            for(int j= 0; j<(n-i-1);++j){
                if(nums[j]>nums[j+1]){
                    temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        return nums;
       
        
    }
int main(){
    vector<int> nums={-4,-1,0,3,10};
    vector<int> result = sortedSquares(nums);
    for(int i : result){
        cout<<i<<" ";
    }
    return 0;
}