/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)return head;
    struct ListNode*p=head->next,*q=head;
    while(p!=NULL){
        if(p->val==val){
            q->next=p->next;
            free(p);
            p=q->next;
        }else{
            p=p->next;
            q=q->next;
        }
    }
    if(head->val==val){
        p=head;
        head=head->next;
        free(p);
    }

    return head;
}
