1721 | Swapping Nodes in a Linked List | Medium | LinkedList

You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values 
of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

Constraints:
The number of nodes in the list is n.
1 <= k <= n <= 10^5
0 <= Node.val <= 100




ListNode* swapNodes(ListNode* head, int k) {
    ListNode* p1 = head;

    while(k>1) {
        p1 = p1->next;
        k--;
    }

    ListNode *slow = head, *fast = p1->next;
    while(fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    swap(slow->val, p1->val);
    return head;
}