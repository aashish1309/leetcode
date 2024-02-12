class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* behind = dummy;
        for(int i = 0; i < left - 1; i++){
            behind = behind->next;
        }

        ListNode* prev = behind->next;
        ListNode* curr = prev->next;

        for(int i = 0; i < right - left; i++){
            prev->next = curr->next;
            curr->next = behind->next;
            behind->next = curr;
            curr = prev->next;
        }

        return dummy->next;
    }
};
