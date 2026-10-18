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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>values;
        while(list1!=nullptr){
            values.push_back(list1->val);
            list1=list1->next;

        }
        while(list2!=nullptr){
              values.push_back(list2->val);
            list2=list2->next;

        }
        sort(values.begin(),values.end());
        ListNode dummy(0);
        ListNode*temp=&dummy;
        for(int i=0;i<values.size();i++){
            temp->next=new ListNode(values[i]);
            temp=temp->next;
        }
        return dummy.next;
        
    }
};
