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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode *cur=head;

        int len=0;
        while(cur){
            len++;
            cur=cur->next;
        }
        cur=head;
        int splitsize=len/k;
        int extranodes=len%k;

        vector<ListNode*> res(k, NULL);
        int idx=0;

        while(cur){
            res[idx++]=cur;

            int curlen=1;
            while(curlen<splitsize){
                cur=cur->next;
                curlen++;
            }

            if(extranodes && len>k){
                cur=cur->next;
                extranodes--;
            }
            ListNode* tmp=cur->next;
            cur->next=NULL;
            cur=tmp;
        }
        return res;
    }
};