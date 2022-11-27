19 | Medium | Remove Nth Node From End of List | Linked List

Given the head of a linked list, remove the nth node from the end of the list
and return its head.

Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz

// to get the length of the LL
int getLength(ListNode *head) {
    ListNode* t = head;
    int count = 0;
    while(t) {
        count++;
        t = t->next;
    }
    return count;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *p1 = head;
    
    // if we need to delete first node. 
    if(getLength(head) == n) {
        return head->next;
    } 
    
    while(n>1) {
        p1 = p1->next;
        n--;
    }
    
    ListNode* slow = head, *fast = p1->next;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    
    ListNode* del = slow->next;
    slow->next = slow->next->next;
    delete del;
    return head;
}