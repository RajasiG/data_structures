#include<bits/stdc++.h>
using namespace std;
struct g_node
{
int data;
vector<int> edge={};
bool visited=false;
g_node *next;
};

class graphBD
{ 
public:
g_node *start;
graphBD();
void add_vertex(int v);
void add_edge(int u, int v);
void display(g_node *start);
void dfs(g_node *start);
void bfs(g_node *start);
};
