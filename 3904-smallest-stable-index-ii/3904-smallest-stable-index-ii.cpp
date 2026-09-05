class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        multiset<int> x(nums.begin(),nums.end());
        int n=nums.size(),mx = INT_MIN;
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            if(mx-*x.begin()<=k) return i;
            x.erase(x.find(nums[i]));
        }
        return -1;
    }
};