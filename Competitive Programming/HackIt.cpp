/*
  An App wants a user to create strong passwords so password must be more than 3 digits and less than 10 digits. I
  run a website which hacks a particular user's ID in that app. So once you login to my portal you will be provided
  with a link to login to the app and once an user clicks your link to login to that app,you will see his password.

  But I made a mistake and so you cannot find original password in my portal . The portal is showing you by adding
  two in every digit . So , now you have to find out the original password of an user if I give you the password
  which is showing in your portal.

  INPUT
  The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.
  The first line of each test case contains a single integer n which is showing in my portal . Mind it , every
  digit of n is greater than one.

  OUTPUT
  Print original password of user .

  SAMPLE INPUT
  2
  3527
  47269
  SAMPLE OUTPUT
  1305
  25047
*/
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin>>t;

  while(t--)
    {
      string N;
      cin>>N;

      int num =0;

      for(int i=0;i<N.size();i++)
	{
	  num = num*10 + ((N[i]-'0')-2);
	}

      cout<<num<<"\n";
    }
  return 0;
}
