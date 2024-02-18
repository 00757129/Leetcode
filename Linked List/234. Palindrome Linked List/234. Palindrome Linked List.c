/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head==NULL||head->next==NULL)return true;
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    struct ListNode* mid=head;
    while(fast!=NULL&&fast->next!=NULL){
        mid=slow;
        fast=fast->next->next;
        slow=slow->next;
    }

    struct ListNode* tmp;
    fast=slow->next;
    while(fast!=NULL){
        tmp=fast->next;
        fast->next=slow;
        slow=fast;
        fast=tmp;
    }

    fast=head;
    while(fast!=mid->next){
        if(fast->val!=slow->val)return false;
        fast=fast->next;
        slow=slow->next;
    }
    return true;
}
