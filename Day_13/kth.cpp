class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* fast = head;
        Node* slow = head;

        for (int i = 0; i < k; ++i) {
            if (!fast) return -1;
            fast = fast->next;
        }

        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow ? slow->data : -1;
        
    }
};

// Given the head of a linked list and the number k, Your task is to find the kth node from the end. If k is more than the number of nodes, then the output should be -1.

// Examples

// Input: LinkedList: 1->2->3->4->5->6->7->8->9, k = 2
// Output: 8
// Explanation: The given linked list is 1->2->3->4->5->6->7->8->9. The 2nd node from end is 8.

// Input: LinkedList: 1->2->3->4->5->6->7->8->9, k = 1
// Output: 9
// Explanation: The given linked list is 1->2->3->4->5->6->7->8->9. The 1st node from end is 9.