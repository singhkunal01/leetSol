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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
 ListNode *res;
  vector<int> store;
//store the values of all linked list.
  for (auto list : lists) {
    ListNode *head = list;
    while (head) {
      store.push_back(head->val);
      head = head->next;
    }
  }
    sort(store.begin(),store.end());
  ListNode *head = NULL;// LIST IS EMPTY
  ListNode *tail = NULL;// LIST IS EMPTY
  for (auto val : store) {
    ListNode *newListNode = new ListNode(val);
    if (head == NULL)
    {
      head = newListNode;
      tail = newListNode;
    }
    else {
      tail->next = newListNode;
      // tail = tail->next;
      //or
      tail = newListNode;
    }
  }
  return head;
    }
};
