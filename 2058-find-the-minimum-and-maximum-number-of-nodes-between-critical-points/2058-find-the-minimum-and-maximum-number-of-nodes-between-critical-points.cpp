/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> x,y;
        ListNode* temp = head;
        while(temp != NULL){
            x.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=1;i<x.size()-1;i++){
            if((x[i-1] < x[i] && x[i] > x[i+1]) || (x[i-1] > x[i] && x[i] < x[i+1])) y.push_back(i+1);
        }
        int n = y.size();
        if(n<2) return {-1,-1};
        if(n==2) return {y[1]-y[0],y[1]-y[0]};
        int m = y[n-1]-y[0],mm=INT_MAX;
        for(int i=0;i<n-1;i++) mm = min(mm,abs(y[i]-y[i+1]));
        return {mm,m};
    }
};