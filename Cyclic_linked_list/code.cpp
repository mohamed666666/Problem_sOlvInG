/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <set>
 using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int pos=-1; 
        if (head==nullptr){
            return false;
        }
        set<ListNode*> s;
        s.insert(head);
        ListNode* temp=head->next;

        while (temp !=nullptr ){
            if (s.count(temp)){
                return true;
            }
            s.insert(temp);
            temp=temp->next;
        }
        return false;

    }
};
