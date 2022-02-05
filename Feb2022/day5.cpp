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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        ListNode* head=NULL;
        ListNode* iter;
        for(int i=0;i<k;i++){
            if(!lists[i]){
                lists.erase(lists.begin()+i);
                k--,i--;
            }
        }
        while(k){
            int temp=INT_MAX;
            int temp_index;
            for(int i=0;i<k;i++){
                if(lists[i]->val<temp){
                    temp=lists[i]->val;
                    temp_index=i;
                }
            }
            ListNode* new_node=new ListNode(temp);
            if(!head){
                head=new_node;
                iter=head;
            }
            else{
                iter->next=new_node;
                iter=iter->next;
            }
            lists[temp_index]=lists[temp_index]->next;
            if(!lists[temp_index]){
                    lists.erase(lists.begin()+temp_index);
                    k--;
            }
        }
        return head;
    }
};