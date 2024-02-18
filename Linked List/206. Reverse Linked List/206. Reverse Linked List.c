/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL){
        return head;
    }
    struct ListNode *p=head->next;//p指針指向正要反轉的
    head->next=NULL;
    while(p!=NULL){
        struct ListNode *ptmp=p->next;//ptmp指向下一輪要反轉的，如果完成了ptmp就指向了NULL
        p->next=head;//開始反轉
        head=p;//head永遠跟着p，原來它指p改成被p指
        p=ptmp;
        
    }
    return head;
}
