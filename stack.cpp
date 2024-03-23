#include<bits/stdc++.h>
using namespace std;
#include<vector>
vector<int> create_stack(vector<int> &n)
{
  vector<int> stack;
  vector<int>:: iterator i;
  for(i=n.begin(); i!=n.end(); i++)
    { stack.push_back(*i);
     }
return stack;
}