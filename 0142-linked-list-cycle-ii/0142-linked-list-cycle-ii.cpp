/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> x;
        ListNode* temp = head;
        while(temp != NULL){
            if(x.empty() || !x.contains(temp)) x.insert(temp);
            else return temp;
            temp = temp->next;
        }
        return NULL;
    }
};