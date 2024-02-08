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
    bool isPalindrome(ListNode* head) {
         vector<int> vec;
    bool flag=true;
    while(head!=NULL){
        vec.push_back(head->val);
        head=head->next;
    }
    int siz=vec.size();
    int i=0,j=siz-1;
    while(j>i){
        if(vec[i]!=vec[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    return flag;
    }
};