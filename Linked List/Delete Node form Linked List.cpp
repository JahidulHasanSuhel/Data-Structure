//Code written by Suhel.
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        while(curr->next!=NULL){
            curr->val=curr->next->val;
            node=curr;
            curr=curr->next;

        }
        node->next=NULL;
    } 
};
