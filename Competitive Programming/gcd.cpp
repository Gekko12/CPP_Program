/*
  You are given array A. There are 4 types of operations associated with it:

    1 l r x, for each i ∈ [l, r] replace ai with the value of x.
    2 l r x, for each i ∈ [l, r] replace ai with the value of the gcd(ai, x) function.
    3 l r, print the value of max ai, l ≤ i ≤ r.
    4 l r, print the value of al + al+1 + ... + ar.

A greatest common divisor (gcd(a, b)) of two positive integers a and b is equal to the biggest integer d such that
 both integers a and b are divisible by d.

Input format

    The first line contains two integers n, m (1 ≤ n, m ≤ 105) - the number of array elements and the number of
 queries.
    The second line contains n positive integers a1, a2, ..., an - initial state of the array.(1 ≤ max Ai ≤ 109,
 1 ≤ i ≤ n)
    Next m lines contain the description of the queries, one per line. Queries are formatted the same way as in the
 problem statement above.
    It is guaranteed that 1 ≤ l ≤ r ≤ n and 1 ≤ x ≤ 109.

Output format

For each third and fourth query type, print the answer for this query in a separate line.
SAMPLE INPUT

4 6
10 12 6 8
3 1 4
4 1 4
2 2 4 4
3 2 4
1 1 4 2
4 1 4

SAMPLE OUTPUT

12
36
4
8

Explanation

Array before queries is [10,12,6,8]

Answer for queries 3 1 4 = 12, because max(10,12,6,8) = 12

Answer for queries 4 1 4 = 36, because 10 + 12 + 6 + 8 = 36

After queries-update 2 2 4 4 array is [10, 4, 2, 4]

Answer for queries 3 2 4 = 4, because max(4,2,4) = 4

After queries-update 1 1 4 2 array is [2, 2, 2, 2]

Answer for queries 4 1 4 = 36, because 2 + 2 + 2 + 2 = 8
 */
#include <bits/stdc++.h>

using namespace std;

void replace(int ,int ,int ,int[]);
void replace_gcd(int ,int ,int ,int[]);
int max(int ,int ,int[]);
long long sum_ary(int ,int ,int[]);
int gcd(int a, int b);


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n ,m ,q=0 ,l=0 ,r=0 ,x=0;

  cin>>n>>m;

  int ary[n];
  for(int i=0;i<n;i++)
    cin>>ary[i];

  while(m--)
    {
      q=0 ,l=0 ,r=0 ,x=0;
      cin>>q;

      switch(q)
	{
	case 1: cin>>l>>r>>x;
	  replace(l-1 ,r-1 ,x ,ary);
	  break;

	case 2:cin>>l>>r>>x;
	  replace_gcd(l-1 ,r-1 ,x ,ary);
	  break;

	case 3:cin>>l>>r;
	  cout<< max(l-1 ,r-1 ,ary) <<"\n";
	  break;

	case 4:cin>>l>>r;
	  cout<< sum_ary(l-1 ,r-1 ,ary) <<"\n";
	  break;
	}
    }
  return 0;
}

void replace(int l ,int r,int x,int ary[])
{
  for(int i=l;i<=r;i++)
    ary[i] = x;
}

void replace_gcd(int l ,int r ,int x ,int ary[])
{
  for(int i=l;i<=r;i++)
    ary[i] = gcd(ary[i] ,x);
}

int gcd(int a, int b) 
{ 
  // Everything divides 0  
  if (a == 0) 
    return b; 
  if (b == 0) 
    return a; 
   
  // base case 
  if (a == b) 
    return a; 
  
  return gcd(b % a, a); 

}

int max(int l ,int r,int ary [])
{
  int max = INT_MIN;
  for(int i=l;i<=r;i++)
    if(ary[i] > max)
      max = ary[i];

  return max;
}

long long sum_ary(int l,int r,int ary[])
{
  long long sum = 0;
  for(int i=l;i<=r;i++)
    sum += ary[i];

  return sum;
}
