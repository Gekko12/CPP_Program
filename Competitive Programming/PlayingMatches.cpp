/*
  Matches required to print the sum of A+B
  Eg : 123 + 123 = 246
       
  As 1 require 2 matches ,2 require 5 matches and so on means to print the sum 246 it requires 5+4+6=15sticks
  
  
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int t ;
  int aa[]={6,2,5,5,4,5,6,3,7,6};

  cin>>t;    		
  while(t--)
    {
      int a , b;
      cin >> a >> b;
      a+=b;
      string s = to_string(a);
      int ans =0;
      for(char c : s){
          ans+= aa[c-'0'];
      }
      cout << ans << "\n";
    }
  return 0;
}
