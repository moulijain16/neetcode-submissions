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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        vector<ListNode*>visit;
        ListNode* temp=head;
        while(temp!=nullptr){
            visit.push_back(temp);
            temp=temp->next;
        }
        int index=visit.size()-n;
         if(index==0){
            return head->next;
         }
         visit[index-1]->next=visit[index]->next;
         return head;
    }
};
