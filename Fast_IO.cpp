/*
Given an array and two persons P1 and P2, we need to find the pickup option that P1 should choose (first / second / draw) so as to get
 more score (which is the sum of the elements they take from the array) such that both of them pick elements alternatively and the one
 that goes second can take two elements in his/her initial turn.
QUICK EXPLANATION:

Sort the array in descending order, then calculate the sum of elements for both choices (going first and second) and then make the optimal
 choice for P1.
EXPLANATION:

Since both P1 and P2 want to maximize their score, they will pick the maximum element from the array. For this, sort the array in descending
 order and find separately the scores of the people who will go first and who will go second.

Also as all the elements are positive, then the second person will always choose to take two elements (even if he/she can take 1 element).

Let S1 be the score of the person who will go first and S2 the score of who will go second.
S1 = sum of elements with index 0, 3, 5, 7, …
S2 = sum of elements with index 1, 2, 4, 6, …

If S1 is greater than S2, then P1 should go “first”.
If S2 is greater than S1, then P1 should go “second”.
If S1 is equal to S2, then the output is “draw”.

*/
#include<bits/stdc++.h> //#include<iostream> 
                                      //#include<vector>      Rather than writting this three only one is enough
                                     //#include<algorithm>
using namespace std;

int main()
{
    // For fast input/output as cin/cout is slower than printf/scanf .....Hats of to C.......
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   
    int t; cin >> t;
    while(t--)
    {
       
        int n; cin >> n;

      
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        // Sort the array in descending order whereas sort(a.begin() ,a.end()) sort array in ascending order
        sort(a.rbegin(), a.rend());
	for(int i=0;i<n;i++) cout << a[i];

        // first_sum : Maximum sum obtainable by player who plays first
        // second_sum : Maximum sum obtainable by player who plays second 
        long long int first_sum = 0, second_sum = 0;
        
        first_sum += a[0]; // n >= 1
        for(int i = 3; i < n; i+=2)
        {
            first_sum += a[i];
        }

        if(n>=2) second_sum += a[1];
        if(n>=3) second_sum += a[2];
        for(int i = 4; i < n; i+=2)
        {
            second_sum += a[i];
        }

       
        if(first_sum > second_sum)
        {
	  cout << "first" << "\n"; //cout<<endl; is slower than cout<<"\n"; Means C is faster than all.......
        }
        else if(first_sum == second_sum)
        {
            cout << "draw" << endl;
        }
        else
        {
            cout << "second" << endl;
        }
    }

    return 0;
}
