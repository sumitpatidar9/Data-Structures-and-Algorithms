
class Solution {
  public:
  
    void insertAtTail(Node* &tail, int data){
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
    
    Node* constructLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* tail = NULL;
        tail = head;
        
        int n = arr.size();
        for(int i = 1;i<n; i++){
            insertAtTail(tail, arr[i]);
        }
        
        return head;
    }
    
    
};