#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *left;
node *right;
};

class BTree
{
 public:
  node *root;
  BTree();
  void insert(int value);
  void bfs_traversal_T(node* root);
  void dfs_inorder_traversal_T(node* root);
  void dfs_preorder_traversal_T(node* root);
  void dfs_postorder_traversal_T(node* root);
};
