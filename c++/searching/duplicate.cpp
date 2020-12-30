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
    int n;
    cin>>n;
    vector<int> nums;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<findDuplicate(nums);
    return 0;
}
