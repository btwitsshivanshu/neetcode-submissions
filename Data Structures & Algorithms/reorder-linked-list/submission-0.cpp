class Solution {
public:
    void reorderList(ListNode* head) {

        ListNode *slow=head;
        ListNode *fast=head;


        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* sechead=slow->next;
        slow->next=NULL;

        ListNode *prev=NULL;
        ListNode * curr=sechead;
        ListNode *Next =NULL;

        while(curr){

            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }

        ListNode *temp=head;
        ListNode *temp2=prev;
        

        while(temp2){

            ListNode *first=temp->next;
            ListNode *second=temp2->next;

            temp->next=temp2;
            temp2->next=first;

            temp=first;
            temp2=second;
        

        }

        


        
    }
};
