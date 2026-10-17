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
    ListNode* reverseList(ListNode* head) {
        vector<int>values;
        ListNode* temp=head;
        while(temp!=nullptr){
            values.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=values.size()-1;
        while(temp!=nullptr){
           temp->val=values[i];
           i--;
           temp=temp->next;
        }
        return head;
    }
};
