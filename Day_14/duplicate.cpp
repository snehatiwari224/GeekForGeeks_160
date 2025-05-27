class Solution {
  public:
    
    Node* removeDuplicates(Node* head) {


        
        Node * current= head;
        while(current != NULL && current->next != NULL){
            if(current->data==current->next->data){
                Node * duplicate=current->next;
                current->next=current->next->next;
                delete duplicate;
            }
            else{
                 current = current->next;
            }
        }
        return head;
    }
};