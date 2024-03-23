#include "reverse.h"
#include "stack.h"
#include "queue.h"
#include "bstree.h"
#include "hash.h"
#include<bits/stdc++.h>
#include<vector>
#include <queue>
using namespace std; 

int main()
{
  //Hash_Implementation
  vector<int> v= {1,2,3,4,5,6,1,2,3};
  map_recc(v);
  //String_Implementation
  string str;
  cout<< "Enter String";
  getline(cin,str); 
  string rev = reverse_string(str);
  cout<< "Reversed string is " << rev;
  //Stack_Implementation
  vector<int> n={1,2,3,4,5};
  vector<int> stack = create_stack(n);
  for(int i=0; i<stack.size(); i++)
    {
      cout<<stack[i]<<" ";
    }
  cout<<"top of the stack is \n"<<stack.back();

  //QUEUE_Implementation
  list<int> l={1,2,3,4,5};
  list<int> queue= queue_create(l);
  queue_delete(queue);
  list<int>:: iterator i;
   for(i=queue.begin(); i!=queue.end(); i++)
  {
    cout<<*i<<" ";
  }
  queue=queue_insert(6);
   for(i=queue.begin(); i!=queue.end(); i++)
  {
    cout<<*i<<" ";
  }

  //BINARY_SEARCH_TREE
  int tree_value, number;
  BStree bst;
  cout<<"Enter the number of nodes in the tree";
  cin>>number;
  for(int t=0;t<number;t++)
    {
  cout<< "enter input" ;
  cin>>tree_value;
  bst.insert(tree_value);
     
    }
  bst.traverse(bst.root);
//priority_queue

  vector<int> priority= {5,6,7,9,2};
  priority_queue<int> pq;
  for(int i=0; i<priority.size(); i++)
    {
      
      pq.push(priority[i]);
      cout<<pq.size();
       cout<<"top of the priority queue is \n";
      cout<<pq.top();
    }
  
  //Pair Implementation
  vector<pair<int,int>> vect_pair;
  int first,second;
 for(int i=0;i<2;i++)
  {
    cout<<"enter two values first and second";
    cin>>first;
    cin>>second;
    vect_pair.push_back(make_pair(first,second));
  }
  if(vect_pair[0]==vect_pair[1])
  {
    cout<<"Both pairs are same";
  }
  else
  {
    vect_pair[0].swap(vect_pair[1]);
    cout<<"swapped pairs are";
    for(int i=0;i<vect_pair.size();i++)
    {
      cout<<vect_pair[i].first;
      cout<<vect_pair[i].second;
    }
  }
  
  //Graph_Implementation
  return 0;
}