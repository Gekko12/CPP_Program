/*
  Given the following string pattern that is infinitely long, you are give a row number. The task for you is to
  print ASCII code of each alphabet of the given row.[All alphabets are capital].
  S
  S S
  S S E
  S S E C
  S S E
  S S
  S
  S
  S S
  S S E
  S S E C
  S S E .............................

  ###Input:
  - First line will contain T, number of testcases. Then the testcases follow.
  - Each testcase contains of a single line of input,row number N.

  ###Output:
  For each row, print its corresponding set of ASCII codes.

  ###Constraints
  - 1≤T≤100
  - 2≤N≤10^9

  ###Sample Input:
  2
  5
  4

  ###Sample Output:
  83 83 69
  83 83 69 67

  ###EXPLANATION:
  Row 5: String: S S E
  Corresponding ASCII Code: 83 83 69
  Row 4: String: S S E C
  Corresponding ASCII Code: 83 83 69 67
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s[] = {"S","SS","SSE","SSEC","SSE","SS","S"};
  int s_len = 7;

  int t;
  cin>>t;

  while(t--)
    {
      int n;
      cin>>n;

      string t = "";
      
      if(n > s_len)
	{
	  int indx = n % s_len;
	  if(indx)
	    t = s[indx-1];
	  else
	    t = s[6];
	      
	  cout<<t<<" : ";
	  for(int i=0;i<t.size();i++)
	    cout<<int(t[i])<<" ";
	  cout<<"\n";
	}
      else
	{
	  t = s[n-1];
	  cout<<t<<" : ";
	  for(int i=0;i<t.size();i++)
	    cout<<int(t[i])<<" ";
	  cout<<"\n";
	}
    }
  return 0;
}
