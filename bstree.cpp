#include "bstree.h"
#include<bits/stdc++.h>
using namespace std;
BStree::BStree()
{
  root=NULL;
  cout<<"tree created";
}
void BStree::insert(int value)
  {
    node* newnode = new node;
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root == NULL)
    {
      root=newnode;
    }
    else
    {
      cout<<"root is not null";
      node* temp = root;
      node* x= NULL;
       while(temp!=NULL)
        {
          x=temp;
        if(value < temp->data)
         {
              temp=temp->left; 
             }         

     else if(value > temp->data)
     {

               temp=temp->right;
       }
       
     }

      if(value < x->data)
        x->left=newnode;
      else
        x->right=newnode;
          
  }
    }
    
void BStree::traverse(node *temp)
{
  if(temp!=NULL)
  { 
    traverse(temp->left);
    cout<<temp->data<<" ";
    traverse(temp->right);
  }
  else
    return;
}