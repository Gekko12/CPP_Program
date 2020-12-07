#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int t ,g ,i ,n ,q ,hc=0 ,tc=0;
  cin>>t;

  while(t--)
    {
      cin>>g;
      while(g--)
	{
	  cin>>i>>n>>q;

	  if(i==1)
	    {
	      if(n%2==0)
		{
		  hc = n/2;
		  tc = n/2;
		}
	      else
		{
		  hc = n/2;
		  tc = n/2 +1;
		}
	    }
	  else 
	    {
	       if(n%2==0)
		{
		  hc = n/2;
		  tc = n/2;
		}
	      else
		{
		  tc = n/2;
		  hc = n/2 +1;
		}
	    }
	  

	  if(q==1)
	    cout<<hc<<"\n";
	  else
	    cout<<tc<<"\n";
	}
    }
  return 0;
}
