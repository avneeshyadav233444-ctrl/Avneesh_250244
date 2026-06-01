#include<bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runningSum(n);
        for(int i = 0; i < n; ++i){
            int temp=0;
            for(int j = 0; j<=i; ++j){
                temp+=nums[j];
            }
            runningSum[i]=temp;
        }
        return runningSum;
        
    }
int main(){
        vector<int> nums={1,2,3,4};
        vector<int> result = runningSum(nums);
        for(int i : result){
            cout<<i<<" ";
        }
    return 0;
}