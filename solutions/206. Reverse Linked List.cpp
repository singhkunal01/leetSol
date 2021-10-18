/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* reverseList(ListNode* head) {
   /* ListNode*temp = head;
    ListNode *dummy = NULL;
    while (temp != NULL) {
        ListNode *nextNode = temp->next;
        temp->next = dummy;
        dummy = temp;
        temp = nextNode;
    }
    return dummy;
    }*/
        ListNode *currNode = head;
     if (currNode == NULL || currNode->next == NULL)
         return currNode;
     head  = reverseList(currNode->next);
     currNode->next->next = currNode;
     currNode->next = NULL;
     return head;
   }
};
/* here is the full explanation of above code for the example 1->2->3->4->5->NULL
this happens at every step */
/*
(temp,dummy) { : [ 1 ->  NULL ],: [ 1 ->  NULL ] }
(temp,dummy) { : [ 2 ->  1 ->  NULL ],: [ 2 ->  1 ->  NULL ] }
(temp,dummy) { : [ 3 ->  2 ->  1 ->  NULL ],: [ 3 ->  2 ->  1 ->  NULL ] }
(temp,dummy) { : [ 4 ->  3 ->  2 ->  1 ->  NULL ],: [ 4 ->  3 ->  2 ->  1 ->  NULL ] }
(temp,dummy) { : [ 5 ->  4 ->  3 ->  2 ->  1 ->  NULL ],: [ 5 ->  4 ->  3 ->  2 ->  1 ->  NULL ] }
*/
