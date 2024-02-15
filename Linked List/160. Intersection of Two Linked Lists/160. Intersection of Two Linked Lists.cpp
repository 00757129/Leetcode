/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLen(ListNode* list){
        int len=0;
        while(list!=NULL){
            list=list->next;
            len++;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)return NULL;
        int lenA=getLen(headA);
        int lenB=getLen(headB);
        while(lenA>lenB){
            headA=headA->next;
            lenA--;
        }
        while(lenB>lenA){
            headB=headB->next;
            lenB--;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }

        return headA;
    }
};
