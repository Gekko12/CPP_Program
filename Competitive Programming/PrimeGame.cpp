/*
  Two friends who are good in mathematics and one of them challenged the other one to find the Prime Number in a
  given range say " A " and " B " , here A & B are the range , but it seems easy to solve , so he twisted the
  question and said print Prime Number Pair whose multiplication comes in between (A * B) and (A/2 * B/2).
  Be careful as between means exclusive of (x,y) ie. x+1,x+2......y-3,y-2,y-1 only considered .

  Input:
  First Line will be Range A
  Second Line will be Range B Output:
  Print the Prime Number Pair
  
  Input Constraints:
  1 ≤ Range ≤ 1000
  First range must be smaller than the Second range.

  Example Input:
  10
  30
  Example Output:
  11,13
  11,17
  11,19
  11,23
  13,17
  13,19
  13,23
  Explanation:
  A = 10 & B = 30 (Range)
  Prime Number between A & B = {11, 13, 17, 19 23, 29}
  A * B = 300
  A/2 * B/2 = 75
  1) 11 * 13 = 143 (75 ≤ 143 ≤ 300 ) ✓
  2) 11 * 17 = 187 (75 ≤ 187 ≤ 300 ) ✓
  3) 11 * 19 = 209 (75 ≤ 209 ≤ 300 ) ✓
  4) 11 * 23 = 253 (75 ≤ 253 ≤ 300 ) ✓
  5) 13 * 17 = 221 (75 ≤ 221 ≤ 300 ) ✓
  6) 13 * 19 = 247 (75 ≤ 247 ≤ 300 ) ✓
  7) 13 * 23 = 299 (75 ≤ 299 ≤ 300 ) ✓
  Rest of the number will not come in between the range. 
*/

#include<bits/stdc++.h>
using namespace std;

int Seive(bool[],int[],int,int);
void Sol(int[] ,int,int ,int);

int main(void)
{
  int l ,h ;
  cin>>l>>h;

  bool prime[h+1];
  memset(prime ,true ,sizeof(prime)); //set all num as primes

  int store[h-l+1]; //to store the prime of given range
  memset(store ,0 ,sizeof(store));
  
  int m = Seive(prime ,store ,l ,h);

  Sol(store ,m ,l ,h);

  return 0;
}

int Seive(bool prime[],int store[],int l,int h)
{
  int n = h;

  prime[0] = prime[1] = false; //as we know 0 and 1 
  for(int i=2;i*i<=n;i++)
    {
      if(prime[i])
	{
	  for(int j=i*i;j<=n;j += i)
	    prime[j] = false;
	}
    }

  int m=0;//store the prime in given range
  for(int i=l;i<=h;i++)
    {
      if(prime[i])
	store[m++] = i;
    }
 
  return m;
}

void Sol(int store[],int m,int l,int h)
{
  int low = l/2 * h/2;
  int high = l*h;

  int p1=0 ,p2=0 ,p3=0 ;
 
  for(int i=0;i<m-1;i++)
    {
      p1 = store[i];
      for(int j=i+1;j<m;j++)
	{
	  p2 = store[j];
	  p3 = p1*p2;
	  if(p3>low && p3<high)
	    {
	      cout<<p1<<","<<p2<<"\n";
	    }
	}
    }
}
	  
  

