#include<bits/stdc++.h>
using namespace std;

void mergeA (vector<int> &arr,int l,int mid, int r)
{ 
      
    cout<<"merge";
 //cout << l << mid << r;
 int sizel=(mid- l) +1;
 int sizer=r- mid  ;
 // cout<<sizel<<sizer;
 vector<int> left_array;
 vector<int> right_array;
 for(int i=0;i<sizel;i++)
   {
     left_array.push_back(arr[l+i]);
     cout<<left_array[i]<<" ";
   }
 for(int j=0;j<sizer;j++)
  {
    right_array.push_back(arr[mid+1+j]);
     cout<<right_array[j]<<" ";
  }
  cout<<"two arrays printed";
 int left=0;
 int right=0;
 int current=l;
  while(left<sizel && right < sizer)
    {
       if(left_array[left]<right_array[right])
          {
            arr[current]=left_array[left];
            left++;
              }
          else
          {
            arr[current]=right_array[right];
             right++;
          }
      cout<<arr[current]<<" ";
          current++;
    }
  cout<<"\n";
  cout<<left<<right;
      while(left<sizel)
        {
          arr[current]=left_array[left];
          left++;
          current++;
                  }

      while(right<sizer)
        {
          arr[current]=right_array[right];
          right++;
          current++;
        }
  

}
void merge_sort (vector<int> &arr, int l, int r)
{  cout<<"\n sort call  "<<l<<r;
  if(l<r)
  {
 int mid = (l+(r-1))/2;
    cout<<"mid is"<<mid<<"\n";
    merge_sort(arr, l, mid);   
    merge_sort(arr, mid+1, r);
    cout<<"merge call"<<l<<mid<<r;
    mergeA(arr,l,mid,r);
  }
 else
    return;
}

