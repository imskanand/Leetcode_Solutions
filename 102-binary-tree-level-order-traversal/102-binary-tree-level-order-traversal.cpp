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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(root==NULL)
            return ans;
        vector<int> v1;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size>0){
            TreeNode* temp=q.front();
            q.pop();   
            v1.push_back(temp->val);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
                size--;
            }
            ans.push_back(v1);
            v1.clear();
        }
        
        return ans;
    }
};