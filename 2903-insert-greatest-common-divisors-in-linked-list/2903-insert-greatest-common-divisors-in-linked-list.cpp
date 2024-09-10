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
    int getgcd(int a, int b){
        if(b==0) return a;
        return getgcd(b, a%b);
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* cur=head;

        while(cur->next){
            int val1=cur->val;
            int val2=cur->next->val;

            int gcd = getgcd(val1,val2);

            ListNode* newNode= new ListNode(gcd);
            ListNode* fwdNode=cur->next;
            cur->next=newNode;
            newNode->next=fwdNode;
            cur=fwdNode;
        }
        return head;
    }
};