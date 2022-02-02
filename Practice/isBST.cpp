  
    bool check(TreeNode* root,long max,long min){
        if(root->val>=max||root->val<=min)
        return false;
        if(!root->left){
            if(!root->right)
            return true;
            if(check(root->right,max,root->val))
            return true;
            else 
                return false;
        }
        if(!root->right){
            if(check(root->left,root->val,min))
            return true;
            else 
                return false;
        }
        if(root->left&&root->right)
        if(!check(root->left,root->val,min)||!check(root->right,max,root->val))
        return false;
        return true;
    }

    
    
    bool isValidBST(TreeNode* root) {
        if(!root)
        return true;
        return check(root,36854775807,-36854775807);
    }
