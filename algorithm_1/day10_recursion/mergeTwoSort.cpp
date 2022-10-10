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
        ListNode *result, *temp, *answer;
        int val = 0;
        if(list1 == nullptr)
        {
            return list2;
        }
        if(list2 == nullptr)
        {
            return list1;
        }
        result = new ListNode;
        answer = result;
        while(list1 != nullptr)
        {
            if(list1->val > list2->val)
            {
                temp = new ListNode(list2->val);
                result->next = temp;
                result = result->next;
                list2 = list2->next;
            }
            else
            {
                temp = new ListNode(list1->val);
                result->next = temp;
                result = result->next;
                list1 = list1->next;
            }
            if(list2 == nullptr)
            {
                result->next = list1;
                break;
            }
        }
        while(list2 != nullptr)
        {
            temp = new ListNode(list2->val);
            result->next = temp;
            list2 = list2->next;
        }
        answer = answer->next;
        return answer;
    }
};
