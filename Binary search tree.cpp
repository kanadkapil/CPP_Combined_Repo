#include <iostream>
using namespace std;

struct node{
	int data;
	node *left, *right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

node *insertBST(node *root, int val){
	if(root==NULL)
	return new node(val);
	if(val<root->data)
	root->left=insertBST(root->left,val);
	else
	root->right=insertBST(root->right,val);
return root;	
}

void postOrder(node *temp){
	if(temp==NULL)
	return;
	postOrder(temp->left);
	postOrder(temp->right);
	cout<<temp->data<<" ";
	
}
void inOrder(node *temp){
	if(temp==NULL)
	return;
	postOrder(temp->left);
	cout<<temp->data<<" ";
	postOrder(temp->right);

}
void preOrder(node *temp){
	if(temp==NULL)
	return;
		cout<<temp->data<<" ";
	postOrder(temp->left);
	postOrder(temp->right);
}

Node* deleteNode(Node* root, int k)
{
    // Base case
    if (root == NULL)
        return root;
 
    // Recursive calls for ancestors of
    // node to be deleted
    if (root->key > k) {
        root->left = deleteNode(root->left, k);
        return root;
    }
    else if (root->key < k) {
        root->right = deleteNode(root->right, k);
        return root;
    }
 
    // We reach here when root is the node
    // to be deleted.
 
    // If one of the children is empty
    if (root->left == NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
    }
 
    // If both children exist
    else {
 
        Node* succParent = root;
 
        // Find successor
        Node* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
 
        // Delete successor.  Since successor
        // is always left child of its parent
        // we can safely make successor's right
        // right child as left of its parent.
        // If there is no succ, then assign
        // succ->right to succParent->right
        if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
 
        // Copy Successor Data to root
        root->key = succ->key;
 
        // Delete Successor and return root
        delete succ;
        return root;
    }
}
 

int main(){
    node *root=NULL;
	root=insertBST(root,5);
	root=insertBST(root,7);
	root=insertBST(root,3);
	root=insertBST(root,1);	
	root=insertBST(root,4);
	root=insertBST(root,6);
	root=insertBST(root,8);
	cout<<"PostOrder: "<<endl;
	postOrder(root);
	cout<<endl<<"PreOrder: "<<endl;
	preOrder(root);
	cout<<endl<<"InOrder: "<<endl;
	inOrder(root);
	return 0;
}
