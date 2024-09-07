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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        unordered_set<int> st (nums.begin(), nums.end());

        ListNode* head2=new ListNode();
        head2->next=head;
        ListNode* cur=head2;
        while(cur->next){
            int val=cur->next->val;
            if(st.count(val)){
                cur->next=cur->next->next;
            }
            else{
                cur=cur->next;
            }
        }
        return head2->next;
    }
};