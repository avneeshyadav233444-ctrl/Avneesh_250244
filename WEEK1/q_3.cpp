#include<bits/stdc++.h>
using namespace std;
int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; ++i){
            string str = to_string(nums[i]);
            if((str.length())%2==0){
                ++count;
            }
        }
        return count;
        
    }
int main(){
    vector<int> nums={342,394,30949,3,3949};
    cout<<findNumbers(nums);
    return 0;
}
