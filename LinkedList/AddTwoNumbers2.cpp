
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int sum = 0;
        int carry = 0;

        ListNode* tail = NULL;
        ListNode* head = NULL;

        while(temp1 != NULL || temp2 != NULL){
            sum = 0;
            if(temp1 != NULL){
                sum = temp1->val;
                temp1 = temp1->next;
            }
            if(temp2 != NULL){
                sum = sum + temp2->val;
                temp2 = temp2->next;
            }
            sum = sum + carry;
            carry = sum/10;
            sum = sum%10;

            if(head == NULL){
                head = new ListNode(sum);
                tail = head;
            }

            else{
                ListNode* newNode = new ListNode(sum);
                tail->next = newNode;
                tail = newNode;
            }    
        }

        if(carry != 0){
            ListNode* newNode = new ListNode(carry);
            tail->next = newNode;
        }


        return head;
    }
};