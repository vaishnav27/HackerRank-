#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

    void topView(Node * root) {
        
        map<int,int>m;
        queue<pair<Node*,int>>q;
        if (!root) {
          return;
        }
        q.push({root,0});
      
        while (!q.empty()) {
             Node*  t = q.front().first;
             int h = q.front().second;
             q.pop();
        if (!m[h]) {
           m[h]=t->data;
        }
        if (t->left) {
           q.push({t->left,h-1});
        }
        if (t->right) {
           q.push({t->right,h+1});
        }
        
        }
        for (auto x:m) {
            cout<<x.second<<" ";
        }


    }

}
