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
class myCompar {
public:
  bool operator()(const ListNode* p1, const ListNode* p2)
  {
    return (p1->val > p2->val);
  }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
 priority_queue <ListNode*, vector<ListNode*> , myCompar> store; //this will make the min heap
//store the values of all linked list.
  for (int i = 0; i < lists.size(); i++) {
    if (lists[i])
      store.push(lists[i]);
  }
  ListNode *head = new ListNode(0), *temp = head;
  while (!store.empty()) {
    auto list = store.top();
    store.pop();
    temp->next = list;
    temp = temp->next;
    if (list->next) {
      store.push(list->next);
    }
  }
  return head->next;
    }
};
