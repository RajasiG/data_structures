#include<bits/stdc++.h>
using namespace std;
#include "bfs_dfs_Tree.h"
#include<queue>
BTree::BTree()
{
  root=NULL;
  cout<<"Tree created \n";
}

void BTree::insert(int value)
{
  node *newnode = new node;
  newnode->left=NULL;
  newnode->right=NULL;
  newnode->data=value;
  if(root==NULL)
  {
    root=newnode;
  }
  else
  {
  node *temp = root;
  node *x=NULL;
  while(temp!=NULL)
  {
    x=temp;
    if(value < temp->data)
    {
      temp=temp->left;
    }
    else 
        temp=temp->right;
       
  }
    if(value < x->data)
  {
    x->left=newnode;
  }
  else
    x->right=newnode;
 
}
}


void BTree::bfs_traversal_T(node* root)
{
if(root==NULL)
{
  cout<<"Tree is empty";
  return;
}
else
{
queue<node*> q;
list<int> l;
node *temp=root;
q.push(root);

while(!q.empty())
  { 
   
   l.push_back(temp->data);
   
   if(temp->left != NULL)
     { q.push(temp->left);
     
     }
   if(temp->right != NULL)
     { q.push(temp->right);
    
     }
     q.pop();
     temp=q.front();
  }

  for(list<int>::iterator i=l.begin();i!=l.end();i++)
    {
      cout<<*i<<" ";
    }
}
}

void BTree::dfs_inorder_traversal_T(node *root)
{
  node *temp=root;
  if(temp==NULL)
  {
    return;
  }
  
 if(temp->left)
  {
    dfs_inorder_traversal_T(temp->left);
  }
  cout<<temp->data<<" ";
  if(temp->right)
  {
    dfs_inorder_traversal_T(temp->right);
  }
}
void BTree::dfs_preorder_traversal_T(node *root)
{
  node *temp=root;
  if(temp==NULL)
  {
    return;
  }
  cout<<temp->data<<" ";
 if(temp->left)
  {
    dfs_inorder_traversal_T(temp->left);
  }
  
  if(temp->right)
  {
    dfs_inorder_traversal_T(temp->right);
  }
}
void BTree::dfs_postorder_traversal_T(node *root)
{
  node *temp=root;
  if(temp==NULL)
  {
    return;
  }

 if(temp->left)
  {
    dfs_inorder_traversal_T(temp->left);
  }

  if(temp->right)
  {
    dfs_inorder_traversal_T(temp->right);
  }
  cout<<temp->data<<" ";
}