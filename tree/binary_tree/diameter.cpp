    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if(root==NULL)
        return 0;
        //answer lies in left subtree
        int left=diameter(root->left);
        //answer lies in right subtree
        int right=diameter(root->right);
        //answer lies in both
        int mixed=height(root->left)+height(root->right)+1;
        
        int ans =max(left,max(right,mixed));
        return ans;
    }
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        return ans;
    }




    //optimised

    