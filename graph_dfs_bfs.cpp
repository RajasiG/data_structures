#include "graph_dfs_bfs.h"
#include<bits/stdc++.h>
using namespace std;
graphBD::graphBD()
{
  cout<<"graph created";
  start=NULL;
}
void graphBD::add_vertex(int vertex)
{
  g_node *temp=new g_node;
  temp->data=vertex;
  temp->next=NULL;
  temp->visited=0;
  if(start==NULL)
  {
    start=temp;
  }
  else
  {
    g_node *trav=start;
    while(trav->next!=NULL)
      trav=trav->next;
    trav->next=temp;
  }
}
void graphBD::add_edge(int node1, int node2)
{
  g_node *trav1=start;
  g_node *trav2=start;
  while(trav1->data!=node1)
    {
      trav1=trav1->next;
    }
  trav1->edge.push_back(node2);
  while(trav2->data!=node2)
  {
    trav2=trav2->next;
  }
  trav2->edge.push_back(node1);
}



void graphBD::dfs(g_node *start)
{
  g_node *trav=start;
  stack<g_node*> s;
  s.push(trav);
   while(!s.empty())
     {  cout<<trav->data;
        trav->visited=1;
     
       for(int i=0;i<trav->edge.size();i++)
        {   g_node *temp=start;   
          while(temp)
            {
              if(temp->data==trav->edge[i] && temp->visited==0)
               { 
          
                      s.push(temp);
                      temp->visited=1;
               }
                else 
              {
             temp=temp->next;
              }
              
              }
          
        }
     
     trav=s.top();
     //cout<<trav->data;
     s.pop();
}
  
}


void graphBD::display(g_node *start)
{ // cout<<"Graph Created";
  g_node *dis=start;
  while(dis!=NULL)
    { cout<< "\nvertex ";
      cout<<dis->data<<"-->";
      for(int i=0;i<dis->edge.size();i++)
        {
          cout<<dis->edge[i];
        } 
      cout<<"\n";
      dis->visited=0;
      dis=dis->next;
    }

}

void graphBD::bfs(g_node *start)
{
  g_node *trav=start;
  queue<g_node*> q;
  q.push(trav);
  trav->visited=1;
       // q.pop(); 
 while(!q.empty())
   { 
 
       trav=q.front(); 
        cout<<trav->data;
       //cout<<trav->data;
        //q.pop();
           for(int i=0;i<trav->edge.size();i++)
              {  
              g_node *temp=start;   
              while(temp)
                {
                  if(temp->data==trav->edge[i] && temp->visited==0)
                   { 
                          //cout<<temp->data;
                          q.push(temp);
                         // cout<<q.back()->data;
                          temp->visited=1;
                   }
                    else 
                  {
                 temp=temp->next;
                  }

                  }

            }
     // cout<<q.front()->data;
      q.pop();
      //cout<<q.front()->data;
    
   }
 
}