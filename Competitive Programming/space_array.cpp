/*
Finally, progress reached the Madoka family and she decided to play with her little sister in the sensational game Space Arrays.

The rules of the game are as follows:
Initially, a sequence a1,a2,…,aN is given.
The players alternate turns.
In each turn, the current player must choose an index i and increment ai, i.e. change ai to ai+1
Afterwards, if there is no permutation p1,p2,…,pN of the integers 1 through N such that ai≤pi holds for each valid i, the current player loses.
Otherwise, the game continues with the next turn.

Madoka is asking you to help her ― tell her if the first player (the player that plays in the first turn) or second player wins this game if both play optimally.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N
The second line contains N space-separated integers a1,a2,…,aN

Output
For each test case, print a single line containing the string "First" if the first player wins or "Second" if the second player wins (without quotes).

Constraints
1≤T≤2⋅10^4
1≤N≤2⋅10^5
The sum of N over all test cases doesn't exceed 2⋅10^5
1≤ai≤N for each valid i

Subtasks
Subtask #1 (100 points): Original constraints

Example Input
4
4
1 2 3 3
4
1 1 3 3
5
1 2 2 1 5
3
2 2 3

Example Output
First
Second
Second
Second

Explanation
Example case 1:
If the first player increases the fourth element, the resulting sequence is (1,2,3,4)
. The second player loses after increasing any of the elements.If the first player increases the second element, the resulting sequence is (1,3,3,3), and he loses because there is no valid permutation. For example if p=(2,1,4,3), the second element of a is greater than the second element of p.
*/

#include <bits/stdc++.h>
#define SIZE 200000

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int n, change_count;
    bool violation = false;     //if we can't change anything ie. zero changes
    int ary[SIZE];
    memset(ary, 0, sizeof(ary));

    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
            cin>>ary[i];

        sort(ary, ary+n);

        change_count = 0;
        violation = false;
        
        for(int i=0;i<n;i++)
        {
            if(i+1 < ary[i])        //like 1 2 3 8 56 (1 2 3 4 5) here forth cause problem
            {
                violation = true;
                break;
            }
        }
        
        if(violation)
        {
            cout<<"Second \n";
            continue;
        }
        
        for(int i=0;i<n;i++)
        {
            if((i+1) >= (ary[i]+1))     //means every ai <= pos after sorting
            {
                change_count += i+1 - ary[i];
            }
        }

        if(change_count % 2 == 0)
            cout<<"Second \n";
        else
            cout<<"First \n";
    }

    return 0;
}




