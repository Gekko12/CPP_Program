/*
Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string S and change each of its substrings that spells "party" to "pawri". Find the resulting string.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T
test cases follows. The first and only line of each test case contains a single string S

Output
For each test case, print a single line containing the string after it is modified by Chef.

Constraints
1≤T≤10
1≤|S|≤10^5
S contains only lowercase English letters

Example Input
3
part
partypartiparty
yemaihuyemericarhaiauryahapartyhorahihai

Example Output
part
pawripartipawri
yemaihuyemericarhaiauryahapawrihorahihai

Explanation
Example case 1: There is no substring "party" in the original string.

Example case 2: The original string has 2 substrings "party".

Example case 3: There is only a single substring "party" in the original string.
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s, match = "party";

    cin>>t;
    while(t--)
    {
        cin>>s;
        int i, j;

        string new_s = "";
        for(i=0; s[i]!='\0'; i++)
        {
            new_s += s[i];
            for(j=0; j<=4; j++)
            {
                if(match[j] != s[i+j])
                    break;
                
            }
            if(j==5)
            {
                i += 4;
                new_s += "awri";    //as char 'p' already inserted
            }
            
        }
        //new_s += '\0';
        cout<<new_s<<"\n";
    }

    return 0;
}