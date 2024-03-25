#include<bits/stdc++.h>
using namespace std;
#include<vector>
struct node_g
{
int data;
vector<int> edge={};
node_g* next;
};

class graph
{
public:
node_g *start;
graph();
void insert_vertex(int vertex);
void insert_edge(int node1, int node2);
void display(node_g *start);
};
