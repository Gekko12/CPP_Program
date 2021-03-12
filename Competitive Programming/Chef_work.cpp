/*Chef has N small boxes arranged on a line from 1 to N. For each valid i, the weight of the i-th box is Wi.
  Chef wants to bring them to his home, which is at the position 0

   He can hold any number of boxes at the same time; however, the total weight of the boxes he's holding must not
  exceed K at any time, and he can only pick the ith box if all the boxes between Chef's home and the ith box have
  been either moved or picked up in this trip.

  Therefore, Chef will pick up boxes and carry them home in one or more round trips. Find the smallest number of
  round trips he needs or determine that he cannot bring all boxes home.

  Input
  The first line of the input contains a single integer T
  denoting the number of test cases. The description of T
  test cases follows.
  The first line of each test case contains two space-separated integers N
  and K
  The second line contains N
  space-separated integers W1,W2,…,WN
  Output
  For each test case, print a single line containing one integer ― the smallest number of round trips or −1
  if it is impossible for Chef to bring all boxes home.
  Constraints  1≤T≤100

  1≤N,K≤103
  1≤Wi≤103
  for each valid i

  Example Input
  4
  1 1 
  2
  2 4
  1 1
  3 6
  3 4 2
  3 6
  3 4 3

  Example Output
  -1
  1
  2
  3
*/
#include<bits/stdc++.h>
using namespace std;

int ary[1001]; //As global array are initialised with 0

int solve(int ary[] ,int n,int k)
{
  for(int i=0;i<n;i++)
    if(ary[i]>k)
      return -1;

  int total=0 ,round=1;
  for(int i=0;i<n;i++){
    if((ary[i]+total)<=k){
      total += ary[i];
    }else{
      total=ary[i];
      round++;
    }
  }

  return round;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n ,t ,k;
  cin>>t;

  while(t--)
    {
      cin>>n>>k;

      for(int i=0;i<n;i++)
	cin>>ary[i];

      int result = solve(ary ,n ,k);
      cout<<result<<"\n";
    }
  return 0;
}
