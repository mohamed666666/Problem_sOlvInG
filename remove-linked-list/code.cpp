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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return head;
        }
        while ( head->val==val){
            head=head->next;
            if(head == nullptr){
                return head;
            }
        }
    
        auto node=head->next;
        auto prevnode=head;
    
        while(prevnode->val==val){
            prevnode=prevnode->next;
            if(prevnode==nullptr){
                return prevnode;
            }
            node=prevnode->next;

        
        }

        while(prevnode->next !=nullptr){
        
            if (node->val ==val){
                prevnode->next=node->next;
                node=prevnode->next;
               
            }
            
            else{
            prevnode=prevnode->next;
            node=node->next;
            }
           
        }
        return head;
    }
};
