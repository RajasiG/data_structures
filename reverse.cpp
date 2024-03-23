#include "reverse.h"
#include<bits/stdc++.h>
using namespace std; 

string reverse_string(string str)
{

  if(str.length() < 3 || str[0] == '\0' )
    return "Wrong Input";
  else {
  string str_rev=str;
  int len = str.length();
  for(int i =0; i< len; i++)
    {
      str_rev[i] = str[len-i-1];
      }
    //return str_rev;
  //another method using reverse in-built function
   reverse(str.begin(), str.end());  
  return str;
  }
}