/*
  You are provided with an input containing a number. Implement a solution to find the largest sum of consecutive
  increasing digits , and present the output with the largest sum and the positon of start and end of the
  consecutive digits.

  Example :

  Input :> 8789651

  Output :> 24:2-4

  where 24 is the largest sum and 2-4 is start and end of the consecutive increasing digits.
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string N;
  cin>>N;

  int lar_sum = INT_MIN;
  int sum =0 ,indx1 =0 ,indx2 =0;
  int digi1 =0, digi2 =0 ,prev=0;
  int i ,j;
  
  for(i=0;i<N.size()-1;i++)
    {
      digi1 = N[i]-'0';
      sum = digi1;
      prev = digi1;
      
      for(j=i+1;j<N.size();j++)
	{
	  digi2 = N[j]-'0';
	  
	  if(prev < digi2)
	    {
	      prev = digi2;
	      sum += digi2;
	    }
  	  else
	    break;
	}
      if(sum > lar_sum)
	{
	  lar_sum = sum;
	  indx1 = i;
	  indx2 = j;
	}
    }

  cout<<lar_sum<<":"<<indx1+1<<"-"<<indx2<<"\n";

  return 0;
}
