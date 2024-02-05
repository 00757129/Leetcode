/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==NULL&&list2==NULL)return NULL;
    else if(list2==NULL)return list1;
    else if(list1==NULL)return list2;

    struct ListNode *mergeList=NULL;
    if(list1->val<list2->val){
        mergeList=list1;
        list1=list1->next;
    }else{
        mergeList=list2;
        list2=list2->next;
    }
    struct ListNode *p=mergeList;
    while(list1!=NULL&&list2!=NULL){
        if(list1->val < list2->val){
            p->next=list1;
            list1=list1->next;
        }else{
            p->next=list2;
            list2=list2->next;
        }
        p=p->next;
    }
    if(list1!=NULL)p->next=list1;
    if(list2!=NULL)p->next=list2;


    return mergeList;

}
