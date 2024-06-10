/*
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value): data(value), left(nullptr), right(nullptr){}
};

Node* findmin(Node* node)
{
    while (node->left != nullptr)
    {
        node  = node->left;
    }
    return node;
    
}
Node* deleteNode(Node* root, int key)
{
    if(root==nullptr)
    {
        return root;
    }
    if(key<root->data){
        root->left = deleteNode(root->left, key);

    }
    if(key>root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else {
        if
    }
}

Node* insertNode(Node* root, int key)
{
    if(root==nullptr)
    {
        return new Node(key);
    }
    if(key<root->data)
    {
        root->left= insertNode(root->left, key);
    }
    else if(key> root->data)
    {
        root->right = insertNode(root->right , key);
    }
    return root;
}

void inorderTraversal(Node* root)
{
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main()
{
    Node* root = nullptr;
    root = insertNode(root, 50);
    root = insertNode(root, 40);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    cout<<"Inorder Traversal\n";
    inorderTraversal(root);
    return  0;
}
*/


/*
class  base{
    public:
    base(){
        cout<<"Construction Base";
    }

    ~base()
    {
        cout<<"destructive Base";
    }
};
class derived : private base{
    public:
    dervied()
    {
        cout<<"Construction Derived";
    }
    ~derived()
    {
        cout<<"Destructive Derived";
    }
};
int main()

{
    derived *d = new derived();
    base *b = d;
    delete b;
    getchar();
    return 0;
}*/
/*
int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 10;
    cout<<*ptr<<endl;
    delete ptr;

}
*/
/*class A
{
    public:
    void show()
    {
        cout<<"Hi I am Krishna Rana";
    }
    
};
class B : public virtual A{};
class C : public virtual A{};
class D : public B, public C{};
int main()
{ 
    A object;
    object.show();
    return 0;
}
*/