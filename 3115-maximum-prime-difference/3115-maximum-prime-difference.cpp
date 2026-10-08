class Solution {
public:
    bool ip(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            if(ip(nums[i])) x.push_back(i);
        }
        return x.back()-x.front();
    }
};