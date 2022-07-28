#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left,*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isBST(node* root,node* min,node* max){
    if(root==NULL){
        return true;
    }

    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }

    bool leftvalid = isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);

    return leftvalid and rightvalid;

}
int main(){
    node* root =new node(10);
    root->left =new node(5);
    root->right =new node(15);

   if(isBST(root,NULL,NULL)){
       cout<<"BST TREE";
   }else{
       cout<<"NO BST TREE";
   }

    return 0;
}
