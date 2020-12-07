/*
  Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all
  prime numbers between two given numbers!
  
  Input
  The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are
  two numbers m and n (1 <= m <= n <= 2147483647, n-m<=10^5) separated by a space.

  Output
  For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by
  an empty line.

  Example
  Input:
  2
  1 10
  3 5

  Output:
  2
  3
  5
  7

  3
  5

  Warning: large Input/Output data, be careful with certain languages (though most should be OK if the algorithm is
  well designed)
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Seive(bool[] ,ll);
void Print(ll ,ll ,int[] ,int);

int main(void)
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
    
  int t;
  scanf("%ld",&t);

  vector<ll> input ;
  
  ll low ,high ;
  while(t--)
    {
      scanf("%ld%ld",&low,&high);

      input.push_back(low);
      input.push_back(high);
    }
  
 ll max = *max_element(input.begin() ,input.end());
 bool prime[max +1];
 Seive(prime ,max +1);
 
 int N = (max+1)/2 +1;
 int got[N]; //To extract primes
 memset(got ,0 ,sizeof(got));
 int k = 0;

 for(ll i=0;i<=max+1;i++)
    {
      if(prime[i])
	got[k++] = i;
    }

 /* for(int itr : got)
    printf("%d ",itr); 
    printf("\n");  */

 
 ll m = 0 ,itr = input.size() ;
 while(itr > 0)
   {
     low = input[m++];
     high = input[m++];

     Print(low ,high ,got ,N);
     itr -= 2;
   }
  
  return 0;
}


void Seive(bool prime[] ,ll N)
{
    
  for(ll i=0;i<N;i++)
    prime[i] = true;
  
  prime[0] = prime[1] = false;

  for(ll i=2; i*i <= N ;i++)
    {
      if(prime[i])
	for(ll j=i*i; j<=N; j += i)
	  prime[j] = false;
    }

}


void Print(ll low ,ll high ,int got[] ,int N)
{
  for(ll i = 0 ; i < N ;i++)
    {
      if(got[i]>=low && got[i]<=high)
	printf("%d \n",got[i]);
      else if(got[i] > high)
	break;
    }
  printf("\n");
}
      
  
