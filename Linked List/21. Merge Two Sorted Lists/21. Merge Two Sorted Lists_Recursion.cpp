struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {    
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    
    struct ListNode *mergehead=NULL;
    
    if(l1->val < l2->val)
    {
        mergehead=l1;
        mergehead->next=mergeTwoLists(l1->next,l2);
    }
    else
    {
        mergehead=l2;
        mergehead->next=mergeTwoLists(l1,l2->next);
    }
    return mergehead;
}   
