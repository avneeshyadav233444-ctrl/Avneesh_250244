#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int temp;
        int n = nums.size();
        for(int i = 0; i<n-1; ++i){
            for(int j =0; j<n-i-1; ++j){
                if(nums[j]>nums[j+1]){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        for(int k = 0; k < n; ++k){
            if(nums[k]!=k){
                return k;
            }
        }
        return n;
        
    }
int main(){
    vector<int> nums={3,0,1};
    cout<<missingNumber(nums);
    return 0;
}
