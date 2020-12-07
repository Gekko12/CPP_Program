/*
  The String Family gave birth to a new Tripartite trio sisters and named them Hema, Rekha and Sushma. Hema and
  Rekha are very fond of parties whereas Sushma hates them. One day Hema and Rekha asked their parents
  to buy them candies to distribute to people in their birthday party. (Remember Hema, Rekha and Sushma were born on
  the same day). But Sushma was uninterested in the party and only wanted candies for herself.

  You will be given a list P of possible number of candidates coming to the party. Were P[i] denotes the count
  of people coming in the i th possibility. In each case every person should get maximum possible equal number of
  can  dies such that after distributing the candies, there are always R candies remaining for Sushma. You have to
  calculate the minimum number of candies required to buy so that, in any possible situation of the given array,
  each person coming to party gets equal number of candies (at least 1 and maximum possible out of total) and ther
  are always R

  candies remaining for Sushma.
  Input:
  First line will contain T, number of testcases. Then the testcases follow.
  First line of each test case contain N, number of possible count of people coming to party
  Next line contain N spaced integers denoting the count of people
  Next line contain R the number of candies always remaining after maximum equal distribution

  Output:
  For each testcase, output in a single line answer, the minimum number of candies required to buy.

  Constraints
  1≤T≤100
  1≤N≤104
  1≤P[i]≤41
  0≤R<min(P[i])

  Sample Input:
  1
  2
  2 3
  1

  Sample Output: // We can just find out the LCM of whole array and then add R candels to it 
  7

*/
#include <bits/stdc++.h> 
using namespace std;

#define ll long long

int gcd(int a, int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(int arr[], int n) 
{ 
  // Initialize result 
  ll ans = arr[0]; 
  
  // ans contains LCM of arr[0], ..arr[i] 
  // after i'th iteration, 
  for (int i = 1; i < n; i++) 
    ans = (((arr[i] * ans)) / 
	   (gcd(arr[i], ans))); 
  
  return ans; 
} 
int main() 
{ 
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t , n ,r;
  cin>>t;

  while(t--)
    {
      cin>>n;

      int ary[n];
      for(int i=0;i<n;i++)
	cin>>ary[i];

      ll ans =  findlcm(ary, n);

      cin>>r;

      ans += r;
      
      cout<<ans<<"\n";
      
    }
  
    
  return 0; 
} 

