/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    if (!head) return NULL;
    struct ListNode* index = head;
    struct ListNode* tmp = index->next;
   while(tmp){
       if(tmp->val!=index->val){
           index->next=tmp;
           index=tmp;
           tmp=index->next;
       }else{
           tmp=tmp->next;
       }
   }
   
    index->next = NULL;
   return head;
}
