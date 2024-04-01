#include "reverse.h"
#include "stack.h"
#include "queue.h"
#include "bstree.h"
#include "hash.h"
#include "graph.h"
 #include "merge_sort.h"
#include "recurse_fact.h"
#include "recurse_fib.h"
#include "bfs_dfs_Tree.h"
#include<bits/stdc++.h>
#include<vector>
#include <queue>
using namespace std; 

int main()
{
  Hash_Implementation
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
  graph g;
  g.insert_vertex(1);
  g.insert_vertex(2);
  g.insert_vertex(3);
  g.insert_edge(1,2);
  g.insert_edge(2,3);
  g.display(g.start);


  //Recursion _factorial
  cout<<"\n Iterative factorial";
  cout<<fact_iter(5);
  cout<<"\n Recursive factorial";
  cout<<fact_recur(5);

   //Recursion _fibonacci
  cout<<"\n Iterative factorial";
  cout<<fibonacci_iter(5);
  cout<<"\n Recursive factorial";
  cout<<fibonacci_recur(5);
  Binary Search
  Merge_Sort
  vector<int> arr = {1,10,9,7,5,4};
   int n = arr.size();
   int mid= (n-1)/2;
    cout<<mid;
   merge_sort(arr, 0, n);
  
  cout<<"Sorted Array is: "<<endl;
   vector<int>:: iterator trav;
   for(trav = arr.begin(); trav != arr.end(); trav++) {
        cout<<*trav<<"  ";
     }
  
 //Breadth-DepthFirstSearch_tree
  BTree bst_new;
  bst_new.insert(3);
  bst_new.insert(4);
  bst_new.insert(1);
  bst_new.insert(5);
  bst_new.insert(9);
  bst_new.insert(2);
  cout<<"\n Levelorder:";
  bst_new.bfs_traversal_T(bst_new.root);
  cout<<"\n Inorder:";
  bst_new.dfs_inorder_traversal_T(bst_new.root);
  cout<<"\n Preorder:";
  bst_new.dfs_preorder_traversal_T(bst_new.root);
  cout<<"\n Postorder:";
  bst_new.dfs_postorder_traversal_T(bst_new.root);
  return 0;
}