class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size(), a, j = 0, e = INT_MAX, o = INT_MAX;
        if (n == 1)
            return true;
        for (int i : nums1) {
            if (i % 2 == 0)
                e = min(e, i);
            else
                o = min(o, i);
        }
        bool ao = true;
        for (int i : nums1) {
            if (i % 2 == 1)
                continue;
            if (o < i && (i - o) % 2 == 1)
                continue;
            ao = false;
            break;
        }
        bool ae = true;
        for (int i : nums1) {
            if (i % 2 == 0)
                continue;
            if (e < i && (i - e) % 2 == 0)
                continue;
            ae = false;
            break;
        }
        return ao || ae;
    }
};