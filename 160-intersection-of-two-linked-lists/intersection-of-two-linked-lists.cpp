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
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        int l1=0,l2=0,num1;
        ListNode* t1=heada;
        ListNode* t2=headb;
        while(heada!=NULL){
            heada=heada->next;
            l1++;
        }
        while(headb!=NULL){
            headb=headb->next;
            l2++;
        }

        ListNode* temp1=l1>=l2 ? t1 : t2;
        ListNode* temp2=l1<l2 ? t1 : t2;
        int diff=abs(l1-l2);

        for(int i=0;i<diff;i++){
            temp1=temp1->next;
        } 

        while(temp1!=nullptr && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};