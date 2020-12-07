/*
           1
         2 3 2
       3 4 5 4 3
     4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5

 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int m=0 ,upto=0;
  
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5-i;j++)cout<<"  ";

      for(int j=0;j<2*i+1;j++)
	{
	  upto = (2*i +1)/2;
	  if(j<=upto)
	    {
	      ++m;
	      printf("%2d",m);
	    }
	  else
	    {
	      --m;
	      printf("%2d",m);
	    }
	}
      cout<<"\n";
  }
  
  return 0;
}
