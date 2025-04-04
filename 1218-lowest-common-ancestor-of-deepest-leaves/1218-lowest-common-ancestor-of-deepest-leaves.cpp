class Solution {

    pair<TreeNode*,int> solve(TreeNode* curr){
        if(!curr) return make_pair(nullptr,0);

        pair<TreeNode*,int> left = solve(curr->left);
        pair<TreeNode*,int> right = solve(curr->right);

        if(left.second==right.second)
            return {curr,1+left.second};

        else if(left.second>right.second)
            return {left.first,1+left.second};

        return {right.first,1+right.second};
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return solve(root).first;
    }
};