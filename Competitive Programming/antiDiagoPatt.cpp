/*
  Consider the following 4×4

  pattern:

  1  2  4  7                    / pattern is like that v/1  /2 /4
  3  5  8 11                   /                          v/3  /5
  6  9 12 14                  /                              v/6
  10 13 15 16                V

  You are given an integer N
  Print the N×N pattern of the same kind (containing integers 1 through N^2).

  Input
  The first line of the input contains a single integer T
  denoting the number of test cases. The description of T
  test cases follows.
  The first and only line of each test case contains a single integer N

  Output
  For each test case, print N
  lines; each of them should contain N
  space-separated integers.

  Constraints
  1≤T≤10
  1≤N≤100
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int t ,n ;
  
  cin>>t;
  while(t--)
    {
      cin>>n;
      int ary[n][n];
      memset(ary,0,sizeof(ary));

      int m=1;

      for(int i=0;i<n;i++)
	{
	  for(int j=0;j<n;j++)
	    {
	      if(ary[i][j]==0)
		{
		  int p=i ,q=j;
		  while(p<=j && q>=i )
		    {
		      ary[p][q]=m;
		      m++;
		      p++;
		      q--;
		    }
		}
	    }
	}
	    
      for(int i=0;i<n;i++)
	{
	  for(int j=0;j<n;j++)
	    {
	      cout<<ary[i][j]<<" ";
	    }
	  cout<<"\n";
	}
    }
  return 0;
}     
