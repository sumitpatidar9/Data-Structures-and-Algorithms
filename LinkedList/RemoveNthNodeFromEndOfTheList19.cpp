class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;

        if(head->next == NULL){
            head = NULL;
            return head;
        }

        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        int rem = count - n;
        count = 0;

        temp = head;
        if(rem == 0){
            ListNode* var = head->next;
            return var;
        }

        while(count < rem-1){
            temp = temp->next;
            count++;
        }

        if(temp->next != NULL){
            temp->next = temp->next->next;
        }

        return head;
    }
};