/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast=head,*low=head;
    //if(head==NULL||head->next==NULL)return false;
    
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        low=low->next;
        if(fast==low)return true;
    }
    return false;
}
