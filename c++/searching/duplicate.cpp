#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findDuplicate(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int dup;
    for(int i=1;i<nums.size();i++){
        dup = nums[i];
        if(dup == nums[i-1]){
            return dup;
        }
    }
}

int main(){
    vector<int> nums = {3,1,3,4,2};
    cout<<findDuplicate(nums);
    return 0;
}
