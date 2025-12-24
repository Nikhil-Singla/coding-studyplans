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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        for(ListNode *temp=head; temp->next!=nullptr; temp=temp->next)
        {
            count++;
        }
        count++;
        count /= 2;
        //cout<<count;
        //return head; //Checking if we got the count
        while(count>0)
        {
            count--;
            head = head->next;
        }
        return head;
        
    }
};
