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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;

        vector<int> ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        int siz=ans.size()-1;
        for(int i=0;i<=siz-1;i++){
            int tem=ans[i];
            for(int j=i+1;j<=siz;j++){
                if(ans[j]>tem){
                    ans[i]=ans[j];
                    break;
                }
            }
            if(ans[i]==tem)
                ans[i]=0;
        }

            ans[siz]=0;
            return ans;
        
    }
};