class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = *max_element(nums.begin(),nums.end()),y = *min_element(nums.begin(),nums.end()),z=0;
        for(int i=2;i<=y;i++){
            if(x%i==0 && y%i==0) z=i;
        }
        if(z==0) return 1;
        return z;
    }
};