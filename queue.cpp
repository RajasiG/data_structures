#include<bits/stdc++.h>
using namespace std;
#include<list>

list<int> queue_create(list<int> &n)
{

  list<int> queue;
  list<int>:: iterator i;
  for(i=n.begin();i!=n.end();i++)
    {
      queue.push_back(*i);
    }
  return queue;
}

void queue_delete(list<int> &n)
{  cout<<"front of the queue is \n"<<n.front();
   n.pop_front();
}
list<int> queue_insert(int n)
{
  list<int> queue;
  queue.push_back(n);
  return queue;
}