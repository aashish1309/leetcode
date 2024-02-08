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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int> vec;
        ListNode* temp=head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        delete temp;
        sort(vec.begin(),vec.end());
        ListNode* hold=new ListNode(vec[0]);

        head=hold;
        for(auto x:vec){
            ListNode* build=new ListNode(x);
            hold->next=build;
            hold=hold->next;
        }
        return head->next;
    }
};