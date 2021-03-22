/*
You are given an integer C. Let d be the smallest integer such that 2d is strictly greater than C
Consider all pairs of non-negative integers (A,B)
such that A,B<2d and A⊕B=C (⊕ denotes the bitwise XOR operation). Find the maximum value of A⋅B
over all these pairs.

Input
The first line of the input contains a single integer T
denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer C

Output
For each test case, print a single line containing one integer ― the maximum possible product A⋅B

Constraints
1≤T≤105
1≤C≤109

Subtasks
Subtask #1 (30 points): 1≤C≤103
Subtask #2 (70 points): original constraints

Example Input
2
13
10

Example Output
70
91

Explanation
Example case 1: The binary representation of 13
is "1101". We can use A=10 ("1010" in binary) and B=7 ("0111" in binary). This gives us the product 70. No other valid pair (A,B) can give us a larger product.

Example case 2: The binary representation of 10
is "1010". We can use A=13 ("1101") and B=7 ("0111"). This gives us the maximum product 91.
*/

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, d;
    cin>>t;

    unsigned long long c, temp, max_product, a, b;
    while(t--)
    {
        cin>>c;
        temp = c;
        d = 0;
        max_product = 0;

        while(temp)
        {
            temp = temp >> 1;   
        //we can find the d by right shift of number ie. divide by 2 till it become 0.. 5>>2>>1>>0
            d++;
        }

        a = pow(2, d-1) - 1;      // A = 2**(d-1) - 1 by carefully observing pattern
        b = c ^ a;              // B = C XOR A this is the property of XOR ie z=x^y is x=z^y
        max_product = a * b; 
        
        cout<<max_product<<"\n";
    }

    return 0;
}

