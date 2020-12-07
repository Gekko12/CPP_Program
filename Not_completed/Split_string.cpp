/*
You are given a string S with length N. Determine if it is possible to find two non-empty strings A and B

which satisfy the following conditions:

    A+B=S

, where +
denotes string concatenation
B
is a substring of A

Note: B
is a substring of A if B can be obtained from A

by deleting several (possibly zero) characters from the beginning and several (possibly zero) characters from the end. For example, "ab" is a substring of "cabd", but "ad" is not.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains a single integer N
.
The second line contains a single string S

    .

Output

For each test case, print a single line containing the string "YES" if it is possible to find strings A
and B

satisfying the given conditions or "NO" otherwise (without quotes).
Constraints

    1≤T≤104

2≤N≤105
|S|=N
S
contains only lowercase English letters
the sum of N
over all test cases does not exceed 106

Example Input

5
6
cabdab
21
yourcrushlovesyouback
16
wubbalubbadubdub
5
split
7
splitit

Example Output

YES
NO
YES
NO
YES

Explanation

Example case 1: We can choose "cabd" as A
and "ab" as B. We can see that A+B=S and B is a substring of A

.

Example case 2: It is impossible to find two strings which satisfy the constraints. For example, when A
is "yourcrushlovesyou" and B is "back", then A+B=S, but B is not a substring of A

.

Example case 3: We can choose "wubbalubbadub" as A
and "dub" as B.

*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t ,n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		int ary[128] ,indx =0 ;
		char c_ary[n];
		
		memset(ary ,0 ,sizeof(ary));
		
		for(int i=0;i<n;i++)
			cin>>c_ary[i];
		
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			indx = int(c_ary[i]);
			++ary[indx];
			
			if( ary[indx] >= 1 && i == n-2)
				flag = true;
		}
		
		if(flag)
			cout<<"YES \n";
		else
			cout<<"NO \n";
	}
	
	return 0;
}
		
	
	
	
	
	
	
	
	
