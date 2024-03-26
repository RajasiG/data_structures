#include<bits/stdc++.h>
using namespace std;

int fibonacci_iter(int limit)
{
int prev=0;
int curr =1;
int fib =0;
int counter=0;
while(counter<(limit-1))
  {
    fib=prev+curr;
    prev=curr;
    curr=fib;
    counter++;
  }
  return fib;
  
}


int fibonacci_recur(int limit)
{
  
  if(limit < 2)
  {
    return limit;
  }
   
 else
  {
   
   return fibonacci_recur(limit-1)+fibonacci_recur(limit-2);
  }

}