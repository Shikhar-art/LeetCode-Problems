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
    private:
    ListNode* middle(ListNode* head){
        ListNode* j=head->next;
        ListNode* i=head;
        while(j!=NULL && j->next!=NULL){
            j=j->next->next;
            i=i->next;
        }
        return i;
    }
    ListNode *reverse(ListNode* head){
        ListNode *cur=head;
        ListNode *prev=NULL;
        ListNode *forward=NULL;
        while(cur!=NULL){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
             cur=forward;
        }
        return prev;
    }
   
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
       ListNode *get=middle(head);
       ListNode* temp=get->next;
       get->next=NULL;
       temp=reverse(temp);
       while(head!=NULL&&temp!=NULL){
        if(head->val!=temp->val){
            return false;
        }
          head=head->next;
          temp=temp->next;
       }
       return true;
    }
};