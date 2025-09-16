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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next)
        return nullptr;      
        int count=0;
        ListNode*p=head;
        while(p)
        {
            count++;
            p=p->next;
           
        }
         int pos=count-n;
          if (pos == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
     
        ListNode*q=head;
    
     for(int i=0;q != NULL && i < pos-1;i++)
        {
           q=q->next;
        }
       if (q && q->next) {
            ListNode* toDelete = q->next;
            q->next = q->next->next;}
        return head;    

    }
};