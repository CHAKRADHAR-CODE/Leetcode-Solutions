class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int t = 0;
        for(int i:nums) t |= i;
        return t*(1<<(nums.size()-1));
    }
};