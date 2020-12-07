/*n the 2-D world of Flatland, the Circles were having their sports day and wanted to end it with a nice
  formation. So, they called upon Mr. Sphere from Spaceland for help. Mr Sphere decides to arrange the Circles in
  square
  formations. He starts with N Circles and forms the largest possible square using these Circles. He then takes the
  remaining Circles and repeats the procedure. A square of side S requires S^2 Circles to create.

  Find the number of squares he will be able to form at the end of the process.
  Input:
  First line will contain T, number of testcases. Then the testcases follow.
  Each testcase contains of a single integer N

  Output:
  For each testcase, output a single integer denoting the number of squares.

  Constraints
  1≤T≤1000
  1≤N≤1000

  Sample Input:

  2
  85
  114
  Sample Output:

  2
  4
  EXPLANATION:

  Test case 1 : Mr Sphere forms a square of side 9 using 81 Circles and then forms a square of side 2 using the
  remaining 4.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t ,n;
  cin>>t;

  while(t--)
    {
      cin>>n;
      int temp=n ,c=0;

      while(temp>0)
	{
	  int x = sqrt(temp);
	  temp = temp - (x*x);
	  c++;

	  if(temp==0)
	    break;
	}
      cout<<c<<"\n";
    }
  return 0;
}

  