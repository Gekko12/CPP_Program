/*
Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the
circuit. Each car prefers to move at its maximum speed. If that's not possible because of the front car being
slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions.
 For the purpose of this problem, you can assume that the straight segment is infinitely long.

Count the number of cars which were moving at their maximum speed on the straight segment.
Input

The first line of the input contains a single integer T denoting the number of test cases to follow. Description of
each test case contains 2 lines. The first of these lines contain a single integer N, the number of cars. The 
second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered
the long straight segment.

Output
For each test case, output a single line containing the number of cars which were moving at their maximum speed on
the segment.

Example
Input:
3
1
10
3
8 3 6
5
4 5 1 2 3

Output:
1
2
2

Constraints

1 ≤ T ≤ 100
1 ≤ N ≤ 10,000
All speeds are distinct positive integers that fit in a 32 bit signed integer.
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size. 
*/

#include<bits/stdc++.h>
using namespace std;

int cars[10001];

int solve(int cars[] ,int n)
{
  if(n==1)
    return 1;

  int count=0;   //very first car is moving with it's max speed
  int speed[n];
  
  speed[0]=cars[0];
  for(int i=1;i<n;i++)
    speed[i] = min(speed[i-1] ,cars[i]);
  for(int i=0;i<n;i++)
    if(speed[i]==cars[i])
      count++;
  
  return count;    
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n , t;
  cin>>t;

  while(t--)
    {
      cin>>n;
      for(int i=0;i<n;i++)
	cin>>cars[i];

      int result=solve(cars ,n);
      cout<<result<<"\n";
    }
  return 0;
}
