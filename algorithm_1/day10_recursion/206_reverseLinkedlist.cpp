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
        if(head == nullptr)
        {return head;}
        ListNode *result;
        result = new ListNode(head->val);
        head = head->next;    
        while(head != nullptr)
        {
            ListNode *temp = new ListNode(head->val);
            temp->next = result;
            result = temp;
            head = head->next;
        }
        return result;
    }
};
