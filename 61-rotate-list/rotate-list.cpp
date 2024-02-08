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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* ptr=head;
        int l=1;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            l++;
            }
            ptr->next=head;
        k=k%l;
        for(int i=0;i<l-k;i++){
            ptr=ptr->next;
        }
        head=ptr->next;
        ptr->next=NULL;
        return head;
    }
};