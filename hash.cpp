#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<map>
void map_recc(vector<int> &v)
{
  map<int,int> m;
  vector<int>::iterator i;
  for(i=v.begin(); i!=v.end(); i++)
    {
      if(m.find(*i)==m.end())
        m[*i]=1;
      else
      { cout<<*i;
       }
    }
}