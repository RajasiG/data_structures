#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
node *left;
node *right;

};

class BStree
{
public:
node* root; //pointer
 BStree();
 void insert(int value);
 void traverse(node *root);
};
