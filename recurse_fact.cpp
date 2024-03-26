#include<bits/stdc++.h>
using namespace std;

int fact_iter(int n)
{ int fact=1;
  for(int i=2;i<=n;i++)
    {
      fact=fact*i;
    }
 return fact;
}
int fact_recur(int n)
{
  if(n==2)
    return 2;
  else
    return n*fact_recur(n-1);
}