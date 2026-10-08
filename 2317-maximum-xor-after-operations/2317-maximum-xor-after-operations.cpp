class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int r = 0;
        for(int a:nums) r |= a;
        return r;
    }
};