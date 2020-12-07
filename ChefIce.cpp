#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t ,m ,n;

  cin>>t;
  while(t--)
    {
      cin>>m>>n; //amt ,flavors

      int cost[n+1];
      cost[0]=0;
      
      for(int i=1;i<=n;i++)
	cin>>cost[i];

      for(int i=1;i<=n-1;i++)
	{
	  for(int j=i+1;j<=n;j++)
	    {
	      int sum = cost[i]+cost[j];
	      if(sum==m)
		{
		  cout<<i<<" "<<j<<"\n";
		  break;
		}
	    }
	}
    }
  return 0;
}
