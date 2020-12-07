/*
Let's call a sequence good if the sum of all its elements is 0

.

You have a sequence of integers A1,A2,…,AN
. You may perform any number of operations on this sequence (including zero). In one operation, you should choose a valid index i and decrease Ai by i

. Can you make the sequence good using these operations?
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains a single integer N
.
The second line contains N
space-separated integers A1,A2,…,AN

    .

Output

For each test case, print a single line containing the string "YES" if it is possible to make the given sequence good or "NO" if it is impossible.
Constraints

    1≤T≤1,000

1≤N≤10
|Ai|≤100
for each valid i

Subtasks

Subtask #1 (10 points): N=1

Subtask #2 (30 points): N≤2

Subtask #3 (60 points): original constraints
Example Input

2
1
-1
2
1 2

Example Output

NO
YES

Explanation

Example case 2: We can perform two operations ― subtract 1
from A1 and 2 from A2.
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--)
    {
      int n ,i;
      cin>>n;

      int A[n+1];
      A[0] = 0;

      for(i=1;i<n+1;i++)
	cin>>A[i];
     	

      if(n == 1 && A[1] < 0)
	{
	  cout<<"NO \n";
	  continue;
	}
      else
	{
	  cout<<"YES \n";
	  continue;
	}

      bool flag = true ,both_negative = false ,fir=false;

      for(i=2;i<n+1;i++)
	{
	  if(A[i] < 0 && A[i-1] < 0)
	    flag = false;
	  else if(A[i]==0 && A[i-1] ==0)
	    flag = false;
	  else if(A[i] > A[i-1])
	    {
	      if(A[i] < abs(A[i-1]))
		flag = false;
	    }
	  else if(A[i] < A[i-1])
	    {
	      if(abs(A[i]) > A[i])
		flag = false;
	    }
	}

      if(flag)
	cout<<"YES \n";
      else
	cout<<"NO \n";
	  
	      
	      
     
      
    }

  return 0;
}
