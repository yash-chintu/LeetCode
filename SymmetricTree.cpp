 bool check(TreeNode* a, TreeNode* b){
        if(a->val!=b->val)
            return false;
        if(a->left){
            if(!b->right)
                return false;
            if(b->right)
                if(!check(a->left,b->right))
                    return false;
        }
        if(!a->left){
            if(b->right)
                return false;
        }
        if(a->right){
            if(!b->left)
                return false;
            if(b->left)
                if(!check(a->right,b->left))
                    return false;
        }
        if(!a->right){
            if(b->left)
                return false;
        }
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        
    if(!root)
        return true;
    if(!root->left&&!root->right)
        return true;
    if(!root->left&&root->right)
        return false;
    if(!root->right&&root->left)
        return false;
    return check(root->left,root->right);
        
    }
