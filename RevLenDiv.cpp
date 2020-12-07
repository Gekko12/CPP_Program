/*
  Reverse Length Divisible Given a number N, check if it is reverse length divisible. A number is said to be
  reverse length divisible if the first i digits of the number is divisible by (l-i+1) where l is the number of
  digits in N and 0 < i <= l.

  For example, 652281 is reverse length divisible because:
  6 is divisible by 6
  65 is divisible by 5
  652 is divisible by 4
  6522 is divisible by 3
  65228 is divisible by 2
  652281 is divisible by 1.

  43268 is not reverse length divisible. Print Yes if the number is reverse length divisible and no otherwise.

  Boundary Conditions:
  0 ≤ n ≤ 100000

  Input Format:
  The first line contains the number N.

  Output Format:
  Print "Yes" if the number is reverse length divisible otherwise print "No" (without quotes).

  Example Input:
  652281

  Example Output:
  Yes 
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string N;
  cin>>N;

  int lenOfN = N.size();
  

  cout<<"Len = "<<lenOfN<<"\n";

  int num=0;
  bool flag = true;
  for(int i=0;i<lenOfN;i++)
    {
      num = num*10 + (N[i]-'0');
      cout<<num<<" ";

      if(num % (lenOfN-(i+1)+1) != 0)
	{
	  flag = false;
	  break;
	}
    }

  if(flag)
    cout<<"Yes \n";
  else
    cout<<"No \n";

  return 0;
}
