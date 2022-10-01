class Solution {
public:

    int solve(TreeNode *root, int &result)
    {
        if(root == NULL)
            return 0;
        int left = solve(root->left, result);
        int right = solve(root->right, result);
        result += abs(left - right);
        return left + right + root->val;
    }
    int findTilt(TreeNode* root) {
        if(root == NULL)
            return 0;
        int result = 0;
        int temp = solve(root, result);
        return result;
    }
};