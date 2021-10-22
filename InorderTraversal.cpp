#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node *left;
    struct node *right;
}node;

vector<int> inorder_Iterative(node *root){
    vector<int>arr;
    if(!root) return arr;
    stack<node*>stack;
    node*tmp=root;
    while(tmp || !stack.empty()){
        while(tmp){
            stack.push(tmp);
            tmp=tmp->left;
        }
        if(!tmp && !stack.empty()){
            tmp=stack.top();
            arr.push_back(tmp->val);
            stack.pop();
            tmp=tmp->right;
        }
    }
    return arr;
}

void inorder_Recursive(node*root,vector<int>&arr){
    if(root){
        inorder_Recursive(root->left,arr);
        arr.push_back(root->val);
        inorder_Recursive(root->right,arr);
    }
}

node* insert(int data,node* root){
    if(!root){
        root=(node*)malloc(sizeof(node));
        root->val=data;
        root->left=root->right=NULL;
        return root;
    }
    if(data < root->val){
        root->left=insert(data,root->left);
    }
    else if(data > root->val) root->right=insert(data,root->right);
    return root;
}

int main(){
    node* root=NULL;
    root=insert(13,root);
    root=insert(11,root);
    root=insert(9,root);
    root=insert(23,root);
    root=insert(8,root);
    root=insert(5,root);
    root=insert(19,root);
    root=insert(1,root);
    root=insert(44,root);
    root=insert(15,root);
    root=insert(7,root);
    vector<int>iter=inorder_Iterative(root);
    cout<<"\nIterative Inorder: ";
    for(int i:iter) cout<<i<<" ";
    vector<int>recur;
    inorder_Recursive(root,recur);
    cout<<"\n\nRecursive Inorder: ";
    for(int i:recur) cout<<i<<" ";
    return 0;
}