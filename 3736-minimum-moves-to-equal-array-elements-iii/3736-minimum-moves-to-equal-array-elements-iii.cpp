class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        int c = 0;
        for(int i:nums) c+=m-i;
        return c;
    }
};