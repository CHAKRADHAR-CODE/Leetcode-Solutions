class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==2) return nums;
        sort(nums.begin(),nums.end());
        vector<int> x;
        for(int i=0;i<n;i++){
            if(i+1 < n && nums[i] != nums[i+1]){
                x.push_back(nums[i]);
                if(x.size() == 2) return x;
            }
            else i++;
        }
        if(x.size() == 1) return {x[0],nums[n-1]};
        return {nums[n-1],nums[n-2]};
    }
};
