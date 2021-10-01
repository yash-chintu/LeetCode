class Solution {
public:
     map<int,vector<int>> m;
    void get(TreeNode* root,int h){
        if(!root)
            return ;
        m[h].push_back(root->val);
        get(root->left,h+1);
        get(root->right,h+1);
        return ;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       get(root,0);
        vector<vector<int>> ans;
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
