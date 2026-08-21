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

    bool sametree(TreeNode* root, TreeNode* subroot){
        if(!root and !subroot){
            return true;
        }
       if(!root or ! subroot){
        return false;
       }

       if(root->val!=subroot->val){
        return false;
       }

       return(sametree(root->left,subroot->left) &&sametree(root->right,subroot->right));

    }

  
     bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root && !subroot){
            return true;
         }
      
        if(!root && subroot){
            return false;
        }

        if(root && !subroot){
            return true;
        }

         if(sametree(root,subroot)){
            return true;
         }

        if(root->val==subroot->val){
            return(isSubtree(root->left,subroot) or isSubtree(root->right,subroot));
        }

 
      


    }
};
