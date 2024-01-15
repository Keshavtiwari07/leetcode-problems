class Solution {
public:
    // Function to calculate the sum of values in a binary search tree (BST) within a given range [low, high].
    int rangeSumBST(TreeNode* root, int low, int high) {
        // Base case: If the current node is null, return 0.
        if (!root) {
            return 0;
        }

        // Check if the current node's value is within the specified range [low, high].
        int currentVal = (root->val >= low && root->val <= high) ? root->val : 0;

        // Recursively calculate the sum of values in the left subtree within the range.
        int leftSum = rangeSumBST(root->left, low, high);
        
        // Recursively calculate the sum of values in the right subtree within the range.
        int rightSum = rangeSumBST(root->right, low, high);

        // Return the sum of current value, left subtree sum, and right subtree sum.
        return currentVal + leftSum + rightSum;
    }
};
