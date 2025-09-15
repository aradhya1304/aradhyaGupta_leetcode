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
bool isPalindrome(ListNode* head) {
ListNode*p= head;
vector <int> nums;
while(p!=NULL)
{
    nums.push_back(p->val);
    p=p->next;

}
int q=0;
int r=nums.size()-1;
while(q<r)
{
    if(nums[q]!=nums[r])
   {
    return false;
    }

q++;
r--;
}
return true;


    }
};