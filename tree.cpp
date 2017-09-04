#include<iostream>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* createNode(int tdata){
    node *newnode = new node();
    newnode ->data = tdata;
    newnode -> left =  NULL;
    newnode -> right =  NULL;
    return newnode;
}

node *root = NULL;

void preorder(node *t){
    if(t != NULL){
        cout << t->data<< " ";
        preorder(t->left);
        preorder(t->right);
    }
}

void inorder(node *t){
    if(t != NULL){
        inorder(t->left);
        cout << t->data<< " ";
        inorder(t->right);
    }
}

void postorder(node *t){
    if(t != NULL){
        postorder(t->left);
        postorder(t->right);
        cout << t->data<< " ";
    }
}

int height(node *t){
    if (t == NULL){
        return 0;
    }
    return (1+max(height(t->left), height(t->right)));
}

int main(){
    root= createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    int h = height(root);
    cout << h;
    return 0;
}
