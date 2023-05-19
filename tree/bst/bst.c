#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;

}Node;

void inorder(Node* root){
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);

}

// Create a node
Node *newNode(int item) {
  Node *temp = (Node *)malloc(sizeof( Node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insert(struct node *node, int data) {
  if (node == NULL) return newNode(data);

  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);

  return node;
}

Node *minValueNode( Node *node) {
 Node *current = node;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}

Node *deleteNode(Node *root, int key) {
  
  if (root == NULL) 
  return root;

  // Find the node to be deleted
  if (key < root->data)
    root->left = deleteNode(root->left, key);
  else if (key > root->data)
    root->right = deleteNode(root->right, key);
  else {

    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = minValueNode(root->right);


    root->data = temp->data;
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}


int main(){

    Node *root = NULL;
    int flag=1;
    while(flag){
        int choice;
        printf("\nPlease enter your desired choice:\n");
        printf("1.insert into tree\n");
        printf("2.Delete from tree\n");
        printf("3.exit\n");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nplease enter the number\n");
            int num;
            scanf("%d",&num);
            root = insert(root, num);
            }
        if (choice==2)
        {
            printf("\nplease enter the number\n");
            int num;
            scanf("%d",&num);
            root = deleteNode(root, num);
        }
        if (choice==3)
        {   
            
            flag=0;
        }
        inorder(root);
}}