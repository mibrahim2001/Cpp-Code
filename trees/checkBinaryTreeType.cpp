#include<iostream>
using namespace std;

#define COUNT 10
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int findDepth(node* root){
    int d = 0;
    while(root != NULL){
        d++;
        root = root->left;
    }
    return d;
}

bool isPerfectTree(node* root, int d, int level = 0){

    //an empty tree is a perfect tree
    if(root == NULL){
        return true;
    }

    //if the node is a leaf node then we will check for its level if its same as depth of the tree return true
    if(root->left == NULL && root->right == NULL){
        return (d == level+1);
    }

    //if the node do not have both left and right child then its not a perfect tree
    if(root->left == NULL || root->right == NULL){
        return false;
    }

    //other wise check the next subtree
    return isPerfectTree(root->left, d, level+1) && isPerfectTree(root->right,d, level+1);



}




void insertnode(node* &root, int key){
    node* n = new node(key);
    if(root == NULL){
        root = n;
    }
    else if(key < root->data){
        insertnode(root->left,key);
    }
    else if(key > root->data){
       insertnode(root->right,key);
    }
}

void print2DUtil(node *root, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    cout<<endl;
    for (int i = COUNT; i < space; i++)
        cout<<" ";
    cout<<root->data<<"\n";

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(node *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}

unsigned int countnodes(node* root)
{
    if (root == NULL)
        return (0);
    return (1 + countnodes(root->left) +
            countnodes(root->right));
}

/* This function checks if the binary tree
is complete or not */
bool isComplete ( node* root, unsigned int index,
                    unsigned int number_nodes)
{
    // An empty tree is complete
    if (root == NULL)
        return (true);

    // If index assigned to current node is more than
    // number of nodes in tree, then tree is not complete
    if (index >= number_nodes)
        return (false);

    // Recur for left and right subtrees
    return (isComplete(root->left, 2*index + 1, number_nodes) &&
            isComplete(root->right, 2*index + 2, number_nodes));
}

bool isFullTree(node* root){
    //an empty tree is a full tree
    if(root == NULL){
        return true;
    }

    //check if the node do not have any children 
    if(root->right == NULL && root->left == NULL){
        return true;
    }

    //check if the node has only one children 
    if(root->left == NULL || root->right == NULL){
        return false;
    }

    return (isFullTree(root->left) && isFullTree(root->right));
}

int main(){
    node* root = NULL;
    insertnode(root,10);
    insertnode(root,7);
    insertnode(root,13);
    insertnode(root,8);
    insertnode(root,6);
    insertnode(root,12);
    insertnode(root,14);
    print2D(root);

    cout<<endl;

    if(isPerfectTree(root,findDepth(root))){
        cout<<"Is a perfect tree"<<endl;
    }
    else{
        cout<<"Is not a perfect tree"<<endl;
    }

    if(isComplete(root,0,countnodes(root))){
        cout<<"Is a complete tree"<<endl;
    }
    else{
        cout<<"Is not a complete tree"<<endl;
    }

    if(isFullTree(root)){
        cout<<"Is a full tree"<<endl;
    }
    else{
        cout<<"Is not a full tree"<<endl;
    }




return 0;
}
