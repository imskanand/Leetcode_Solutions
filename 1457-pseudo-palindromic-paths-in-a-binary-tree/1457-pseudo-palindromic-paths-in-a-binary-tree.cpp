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
  int sol = 0;
	void helper(TreeNode* root, int mat[], int numberOfOdds) {
		mat[root->val] ++;
		if(mat[root->val] % 2 == 0) numberOfOdds --;
		else numberOfOdds ++;
		int matl[10], matr[10];
		for(int i = 0; i < 10; i ++) matl[i] = matr[i] = mat[i];

		if(root->left == NULL && root->right == NULL) {
			if(numberOfOdds < 2) sol ++;
			return;
		} else if(root->left == NULL) helper(root->right, matr, numberOfOdds);
		else if(root->right == NULL) helper(root->left, matl, numberOfOdds);
		else {
			helper(root->left, matl, numberOfOdds);
			helper(root->right, matr, numberOfOdds);
		}
	}
    int pseudoPalindromicPaths (TreeNode* root) {
      int mat[10] = {0};
		helper(root, mat, 0);
		return sol;  
    }
};