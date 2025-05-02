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
    ListNode* reverseList(ListNode* head) {
       
 
      stack<int> rev;
        ListNode *temp=head;
        while(temp){
            rev.push(temp->val);
            temp=temp->next;
        }
        head=NULL;
        while(!rev.empty()){
            int x=rev.top();
            rev.pop();
            ListNode *newNode=new ListNode();
            newNode->val=x;
            newNode->next=NULL;
            if(head==NULL){
                head=newNode;

            }
            else{
                ListNode *karan=head;
                while(karan->next!=NULL){
                    karan=karan->next;
                }
                karan->next=newNode;
                
            }
        }
       return head; 
    }
};