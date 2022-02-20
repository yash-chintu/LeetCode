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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *pred = head;
        ListNode *succ = head->next;
        ListNode *ans = succ;
        ListNode *prev = NULL;
        while (pred && pred->next)
        {
            pred->next = succ->next;
            succ->next = pred;
            if (prev)
                prev->next = succ;
            prev = pred;
            pred = pred->next;
            if (pred)
                succ = pred->next;
        }
        return ans;
    }
};