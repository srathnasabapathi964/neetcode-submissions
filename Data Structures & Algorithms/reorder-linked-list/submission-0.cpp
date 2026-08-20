/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
     
     ListNode* fast;
     ListNode* slow;

     fast = slow = head;
      //finding mid
      while(fast&&fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    //reverse the second half

    ListNode*second = slow->next;
    ListNode* prev = slow->next = 0;
    ListNode*temp;
    while(second){
        temp = second->next;
        second->next = prev;
        prev = second;
        second = temp;
    }
   

    //merge
    ListNode* first = head;
    second = prev;
    
    while(second){
       ListNode*tmp1 = first->next;
        ListNode*tmp2 = second->next;
       
       first->next = second;
       second->next = tmp1;

    first = tmp1;
    second = tmp2;


    } 

     
     

    }
};
