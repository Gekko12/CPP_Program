/*
  Reversed number is a number written in arabic numerals but the order of digits is reversed. The first digit
  becomes last and vice versa. For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of 
  them now. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is
  lost by reversing (e.g. 1200 gives 21). Also note that the reversed number never has any trailing zeros.

  ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed
  sum. Of course, the result is not unique because any particular number is a reversed form of several 
  numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by
  reversing (e.g. assume that the original number was 12).

  Input
  The input consists of N cases (equal to about 10000). The first line of the input contains only positive integer
  N. Then follow the cases. Each case consists of exactly one line with two positive integers separated by space.
  These are the reversed numbers you are to add.

  Output
  For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers.
  Omit any leading zeros in the output.

  Example
  Sample input: 
  3
  24 1
  4358 754
  305 794

  Sample output:
  34
  1998
  1
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
      long long a ,b;
      cin>>a>>b;

      long long temp_a = a ,temp_b = b;
      long long a_rev = 0 ,b_rev = 0 ,rem = 0;

      while(temp_a > 0)
	{
	  rem = temp_a % 10;
	  if(rem)
	    a_rev = a_rev * 10 + rem;
	  else
	    a_rev *= 10;
	  temp_a /= 10;
	}
      
       while(temp_b > 0)
	{
	  rem = temp_b % 10;
	  if(rem)
	    b_rev = b_rev * 10 + rem;
	  else
	    b_rev *= 10;
	  temp_b /= 10;
	}

       long long sum = 0 ,temp_sum ,rev_sum = 0;
       sum = a_rev + b_rev ;
       temp_sum = sum;
       
        while(temp_sum > 0)
	{
	  rem = temp_sum % 10;
	  if(rem)
	    rev_sum = rev_sum * 10 + rem;
	  else
	    rev_sum *= 10;
	  temp_sum /= 10;
	}

	cout<<rev_sum<<"\n";
    }
  return 0;
}
  

      
