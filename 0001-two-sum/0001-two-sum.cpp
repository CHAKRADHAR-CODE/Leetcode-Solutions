class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> x;
        for(int i=0;i<nums.size();i++){
            if(!x.empty() && x.contains(nums[i])) return {x[nums[i]],i};
            x[target-nums[i]] = i;
        }
        return {0,1};
    }
};

