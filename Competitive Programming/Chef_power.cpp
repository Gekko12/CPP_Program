/*
  Given two integers x and n, we need to find number of ways to express x as sum of n-th powers of unique natural
  numbers. It is given that 1 <= n <= 20.

  Examples:

  Input  : x = 100
  n = 2

  Output : 3

  Explanation: There are three ways to 
  express 100 as sum of natural numbers
  raised to power 2.
  100 = 10^2 = 8^2+6^2 = 1^2+3^2+4^2+5^2+7^2

  Input  : x = 100
  n = 3
  Output : 1
  Explanation : The only combination is,
  1^3 + 2^3 + 3^3 + 4^3
*/
#include<bits/stdc++.h> 
using namespace std; 

int power(int num, unsigned int n) 
{ 
  if (n == 0) 
    return 1; 
  else if (n%2 == 0) 
    return power(num, n/2)*power(num, n/2); 
  else
    return num*power(num, n/2)*power(num, n/2); 
} 


int checkRecursive(int x, int n, int curr_num = 1, 
		   int curr_sum = 0) 
{ 
  
  int results = 0; 

  // Calling power of 'i' raised to 'n' 
  int p = power(curr_num, n); 
  while (p + curr_sum < x) 
    { 
      // Recursively check all greater values of i 
      results += checkRecursive(x, n, curr_num+1, 
				p+curr_sum); 
      curr_num++; 
      p = power(curr_num, n); 
    } 

  // If sum of powers is equal to x 
  // then increase the value of result. 
  if (p + curr_sum == x) 
    results++;
 else if(p + curr_sum + 1 == x)
    results++;
 else
   ;

  // Return the final result 
  return results; 
} 

// Driver Code. 
int main() 
{ 
  int x ,n;
  cin >>x>>n;
  cout << checkRecursive(x, n); 
  return 0; 
} 
