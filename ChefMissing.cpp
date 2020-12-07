/*
  Chef had two lists of ingredients that were permutations of one another. He was very proud. Unfortunately, while
  going from work , some numbers were lost out of the first list. Can you find the missing numbers?

  Notes:
  If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both
  lists is the same. If that is not the case, then it is also a missing number.
  You have to print all the missing numbers in ascending order.

  Input:
  There will be four lines of input:
  N the size of the first list,
  The next line contains space-separated integers arr[i]
  M the size of the second list,
  The next line contains space-separated integers brr[i]

  Output:
  Output the missing numbers in ascending order.

  Constraints
  1≤n,m≤2X105
  n≤m
  1≤brr[i] ≤104

  Sample Input:
  10
  203 204 205 206 207 208 203 204 205 206
  13
  203 204 204 205 206 207 205 208 203 206 205 206 204

  Sample Output:
  204 205 206
*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 200001
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n ,m ,ele ,amax=INT_MIN ,amin=INT_MAX ,bmax=INT_MIN ,bmin=INT_MAX;
 
  cin>>n;
 
  int arr[MAX];
  memset(arr ,0 ,sizeof(arr));
  for(int i=0;i<n;i++)
    {
      cin>>ele;
      ++arr[ele];
      if(ele>amax)
	{
	  amax = ele;
	}
      if(ele<amin)
	{
	  amin = ele;
	}
    }
 
  
  cin>>m;
  int brr[MAX];
  memset(brr ,0 ,sizeof(brr));
  for(int i=0;i<m;i++)
    {
      cin>>ele;
      ++brr[ele];
      if(ele>bmax)
	{
	  bmax = ele;
	}
      if(ele<bmin)
	{
	  bmin = ele;
	}
    }

  int min=0;
  if(amin < bmin) min=amin;
  else min=bmin;
  cout<<"min="<<min<<endl;
  
  int max=0;
  if(amax > bmax) max=amax;
  else max=bmax;
  cout<<"max="<<max<<endl;
  
  int res[MAX] ,k=0 ;
  
  for(int i=min;i<=max;i++)
    {
      if(arr[i]!=brr[i])
	{
	  res[k++]=i;
	}
    }

  sort(res ,res+k);
  for(int i=0;i<k;i++)
    cout<<res[i]<<" ";
  
 
  return 0;
}
	  
      
  
