/*
  Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most 
  significant and dK-1 the least significant digit). This number is so large that we can't give it to you on the 
  input explicitly; instead, you are only given its starting digits and a way to construct the remainder of the
  number.

  Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant) digits,
  modulo 10 — more formally, the following formula must hold: d(i) = summation(d(j))from j=0 to i-1 (mod 10) ,2<=i<k

  Determine if N is a multiple of 3.
  Input

  The first line of the input contains a single integer T denoting the number of test cases. The description of
  T test cases follows.
  The first and only line of each test case contains three space-separated integers K, d0 and d1.

  Output

  For each test case, print a single line containing the string "YES" (without quotes) if the number N is 
  a multiple of 3 or "NO" (without quotes) otherwise.
  Constraints

  1 ≤ T ≤ 1000
  2 ≤ K ≤ 1012
  1 ≤ d0 ≤ 9
  0 ≤ d1 ≤ 9

  Example

  Input:
  3
  5 3 4
  13 8 1
  760399384224 5 1

  Output:
  NO
  YES
  YES

  Explanation
  Example case 1: The whole number N is 34748, which is not divisible by 3, so the answer is NO.

  Example case 2: The whole number N is 8198624862486, which is divisible by 3, so the answer is YES.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t ,d0 ,d1 ,d2;
  ll sum ,k ,sets;

  cin>>t;
  while(t--){
    cin>>k>>d0>>d1;
    sum=0 ,sets=0;

    d2 = (d0+d1)%10;
    sum = d0 + d1 + d2;
    k -= 3;

    while(k>0){
      if(((sum%10)==2 || (sum%10)==4 || (sum%10)==8 || (sum%10)==6 ) && k>4)
	{
	  sets = k / 4;
	  sum += 20*sets;
	  k = k%4;
	}
      else if((sum%10)==0)
	{ //As if 55000....000..k times sum will not change
	  break;
	}
      else
	{
	  d2 = sum%10;
	  sum += d2;
	  k--;
	}
    }
    //   cout<<sum<<" ";
    if(sum%3==0)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}
