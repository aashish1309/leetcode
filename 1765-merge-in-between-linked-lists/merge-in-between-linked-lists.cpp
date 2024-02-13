/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1=list1;
        int i=0;
        while(i!=a-1){
            t1=t1->next;
            i++;
        }
        ListNode* t2=t1;
        while(i!=b){
            t2=t2->next;
            i++;
        }
        t1->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=t2->next;
        return list1;
    }
};