 vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        vector<ListNode*> ans;
        ListNode* temp=head;
        while(temp){
        n++;
        temp=temp->next;    
        
        }
        int part_size = n / k, left = n % k;
        ListNode *ptr = head, *prev = NULL;
        
        vector<ListNode*> res(k);
        for (int i = 0; i < k; i++) {
            res[i] = head;
            
            for (int j = 0; j < part_size + (i < left); j++) {
                prev = head; 
                head = head->next; 
            }
            if (prev) prev->next = NULL;
        }
        
        return res;
    }
