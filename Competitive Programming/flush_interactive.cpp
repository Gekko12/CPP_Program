/*
Chef has a secret integer. The only information you have is that it has an odd number of factors and that it lies between 1 and 10^6 inclusive.

You have been challenged by Chef to find his number. You may make up to 2,000 guesses (queries). Whenever you guess Chef's number, he only tells you if you guessed correctly or not. Can you find Chef's number?

Interaction
First, you should read a line containing a single integer T ― the number of test cases. The description of interaction for T test cases follows.

For each test case, you should start by asking queries.
To ask a query, you should print a line containing an integer between 1 and 10^6
inclusive ― your guess.
Then, you should read a line containing a single integer: 1 if you correctly guessed Chef's secret number, 0 if your guess was incorrect or −1 if your guess is invalid (in particular, smaller than 1 or greater than 10^6) or you have asked more than 2,000 queries.

As soon as you have correctly guessed Chef's secret number, you should stop asking queries and continue solving the remaining test cases.

If you read −1, you must immediately terminate your program to receive a Wrong Answer verdict. Otherwise, you may receive any verdict. Don't forget to flush the output after printing each line! You can read more about interactive problems here https://codeforces.com/blog/entry/45307.

Constraints
1≤T≤100
Chef's secret number lies between 1 and 10^6 inclusive
Chef's secret number has an odd number of factors

Interaction
Grader          You
1
                232
0
                92739
0
                100
1

Explanation
Example case 1:
You ask Chef if 232 is his secret number. Chef replies with 0, so it is not.

You ask Chef if 92,739 is his secret number. Chef replies with 0, so it is not.

You ask Chef if 100 is his secret number. Chef replies with 1, so this is indeed his secret number.
*/
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void) {

    int t, queries = 0;
    int odd_fact_no[] = {1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400,441,484,529,576,625,676,729,784,841,900,961,1024,1089,1156,1225,1296,1369,1444,1521,1600,1681,1764,1849,1936,2025,2116,2209,2304,2401,2500,2601,2704,2809,2916,3025,3136,3249,3364,3481,3600,3721,3844,3969,4096,4225,4356,4489,4624,4761,4900,5041,5184,5329,5476,5625,5776,5929,6084,6241,6400,6561,6724,6889,7056,7225,7396,7569,7744,7921,8100,8281,8464,8649,8836,9025,9216,9409,9604,9801,10000,10201,10404,10609,10816,11025,11236,11449,11664,11881,12100,12321,12544,12769,12996,13225,13456,13689,13924,14161,14400,14641,14884,15129,15376,15625,15876,16129,16384,16641,16900,17161,17424,17689,17956,18225,18496,18769,19044,19321,19600,19881,20164,20449,20736,21025,21316,21609,21904,22201,22500,22801,23104,23409,23716,24025,24336,24649,24964,25281,25600,25921,26244,26569,26896,27225,27556,27889,28224,28561,28900,29241,29584,29929,30276,30625,30976,31329,31684,32041,32400,32761,33124,33489,33856,34225,34596,34969,35344,35721,36100,36481,36864,37249,37636};
    scanf("%d", &t);
    while(t--)
    {
        int l = 1, r = 1000000;
        int indx = 0;
        while (queries < 2000) {
            queries ++;
            int mid = odd_fact_no[indx];
            printf("%d\n", mid);
            fflush(stdout);

            int response;
            scanf("%d", &response);
            
            if(response == 0)
                indx ++;
            else if(response == 1)
                break;
            else
                exit(0);
        }
        //fflush(stdout);
    }
    return "NOT ACCEPTED ...... CHECK IT ON CODECHEF CODE:- GUESSIT (MARCH, 21 COOKOFF CHALLENGE)";
}