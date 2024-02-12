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
    int pairSum(ListNode* head) {
        stack<int> stak;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            stak.push(temp->val);
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int n=cnt/2;
        int sum=0;
        while(n>0 && !stak.empty()){
            sum=max(sum,stak.top()+temp->val);
            stak.pop();
            temp=temp->next;
            n--;
        } 
        return sum;
    }
};