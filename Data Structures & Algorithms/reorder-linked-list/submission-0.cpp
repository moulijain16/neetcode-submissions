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
    void reorderList(ListNode* head) {
        vector<ListNode*>visit;
        ListNode* temp=head;
        while(temp!=nullptr){
            visit.push_back(temp);
            temp=temp->next;
        }
    int left=0;
    int right=visit.size()-1;
    while(left<right){
        visit[left]->next=visit[right];
        left++;
    
    if(left==right)
    break;
    visit[right]->next=visit[left];
    right--;
    }
    visit[left]->next=nullptr;  
    }
};
