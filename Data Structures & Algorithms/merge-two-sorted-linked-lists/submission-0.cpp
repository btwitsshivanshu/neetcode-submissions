class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *temp1=list1;
        ListNode *temp2=list2;

        ListNode *dummy= new ListNode(0);
        ListNode *temp=dummy;

        while(temp1 && temp2){

            if(temp1->val<temp2->val){
                ListNode *newNode= new ListNode(temp1->val);
                temp1=temp1->next;
                temp->next=newNode;
                temp=newNode;
            }

            else{
                ListNode *newNode= new ListNode (temp2->val);
                temp2=temp2->next;
                temp->next=newNode;
                temp=newNode;
            }

            

            



        }

        while(temp1){

            ListNode *newNode= new ListNode(temp1->val);
            temp->next=newNode;
            temp=newNode;
            temp1=temp1->next;
        }

        while(temp2){

            ListNode *newNode= new ListNode(temp2->val);
            temp->next=newNode;
            temp=newNode;
            temp2=temp2->next;
        }

        return dummy->next;
        
    }
};
