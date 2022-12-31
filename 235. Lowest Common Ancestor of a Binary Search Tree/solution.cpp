/*
56 ms
23.3 MB

TC : O(N)
SC : O(1)
*/

/**
 * @author : SahilK-027
 * @brief : Iterative
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* a, TreeNode* b) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        while(root!=NULL)
        {
            if(root->val < a->val && root->val < b->val){
                root = root->right;
            }
            else if(root->val > a->val && root->val > b->val){
               root = root->left;
            }
            else{
                // If root found break and come out
                break;
            }
        }
        return root;
    }
};