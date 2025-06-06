*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
          if (!head || !head->next) return;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) break;
        }

        if (slow != fast) return;

        slow = head;
        if (slow == fast) {
            while (fast->next != slow)
                fast = fast->next;
        } else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        fast->next = nullptr;
        
    }
};
// Input: head = 1 -> 3 -> 4, pos = 2
// Output: true
// Explanation: The linked list looks like 1 -> 3 -> 4. Removing the loop creates a linked list with no loop.