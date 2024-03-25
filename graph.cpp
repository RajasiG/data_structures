#include<bits/stdc++.h>
using namespace std;
#include "graph.h"
graph::graph()
{
  cout<<"graph created";
  start=NULL;
}

void graph::insert_vertex(int vertex)
{
  node_g *temp=new node_g;
  temp->data=vertex;
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
  }
  else
  {
    node_g *trav=start;
    while(trav->next!=NULL)
      {
        trav=trav->next;
      }
    trav->next=temp;
  }
}

//undirected
void graph::insert_edge(int node1, int node2)
{  node_g *trav1=start;
   while(trav1->data!=node1)
     {
       trav1=trav1->next;
     }
 trav1->edge.push_back(node2);
 node_g *trav2=start;
 while(trav2->data!=node2)
    {
      trav2=trav2->next;
    }
 trav2->edge.push_back(node1);
  
}

void graph::display(node_g *start)
{ cout<<"Graph Created";
  node_g *dis=start;
  while(dis!=NULL)
    { cout<< "\nvertex ";
      cout<<dis->data<<"-->";
      for(int i=0;i<dis->edge.size();i++)
        {
          cout<<dis->edge[i];
        } 
      cout<<"\n";
      dis=dis->next;
    }
  
}