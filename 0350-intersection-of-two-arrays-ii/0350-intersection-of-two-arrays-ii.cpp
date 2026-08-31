class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> x;
        vector<int> y;
        int n = nums1.size(),m = nums2.size();
        if(n<m){
            for(int i:nums2) x.insert(i);
            for(int i:nums1){
                if(x.contains(i)){
                    y.push_back(i);
                    auto t = x.find(i);
                    if(t != x.end()) x.erase(t);
                }
            }
        }
        else{
            for(int i:nums1) x.insert(i);
            for(int i:nums2){
                if(x.contains(i)){
                    y.push_back(i);
                    auto t = x.find(i);
                    if(t != x.end()) x.erase(t);
                }
            }
        }
        return y;
    }
};