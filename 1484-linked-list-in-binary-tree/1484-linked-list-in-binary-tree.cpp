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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool traverse(TreeNode* root, ListNode* head){
        //list end reached
        if(head==NULL) return true;
        //tree leaf
        if(root==NULL) return false;

        bool res=false;
        if(root->val==head->val){
            res=traverse(root->left, head->next) || traverse(root->right, head->next);
        }

        return res;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root) return false;
        if(traverse(root,head)) return true;
        return ( isSubPath(head, root->left) || isSubPath(head, root->right));
    }
};