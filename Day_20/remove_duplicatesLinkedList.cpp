class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
    if (head == NULL || head->next == NULL)
            return head;

        unordered_set<int> seen;
        Node* current = head;
        Node* prev = NULL;

        while (current != NULL) {
            if (seen.find(current->data) != seen.end()) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                seen.insert(current->data);
                prev = current;
                current = current->next;
            }
        }
        return head;
        
    }
};