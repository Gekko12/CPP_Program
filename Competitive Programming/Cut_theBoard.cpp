/*
  Suzumo has a chessboard with N rows and M columns. In one step, he can choose two cells of the 
  chessboard which share a common edge (that has not been
  cut yet) and cut this edge.

  Formally, the chessboard is split into two or more pieces if it is possible to partition its cells into two
  non-empt subsets S1 and S2 (S1∩S2=∅, |S1|+|S2|=NM) such that there is no pair of cells c1,c2 (c1∈S1,c2∈S2) which 
  share a common edge that has not been cut.

  Suzumo does not want the board to split into two or more pieces. Compute the maximum number of steps he can
  perform while satisfying this condition.

  Input
  The first line of the input contains a single integer T denoting the number of test cases. The description of T
  test cases follows.
  The first and only line of each test case contains two space-separated integers N and M

  Output
  For each test case, print a single line containing one integer — the maximum possible number of steps.

  Constraints
  1≤T≤64
  1≤N,M≤8

  Example Input
  4
  2 4
  3 3
  6 8
  7 5

  Example Output
  3
  4
  35
  24

  Explanation :- Given N x M chessboard. Make cuts on some of the edges but don’t cut the board into pieces.
  How many maximum such cuts can you make?

  Note that we can make cuts between every two consecutive row of cells. There will be N - 1. Such rows to be
  cut. Within a row we can make M - 1 cuts. This way of cutting will make the board look like an extended E - shape
  structure. Refer to the figure for more understanding -

  So number of cuts is (N−1)×(M−1) times

 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n ,m;
  cin>>t;

  while(t--)
    {
      cin>>n;
      cin>>m;
      int res = (n-1)*(m-1);
      cout<<res<<"\n";
    }
  return 0;
}
