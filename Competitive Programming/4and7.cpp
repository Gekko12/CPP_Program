/*
   Today is Aman's birthday. So his friend decided to give him a present. His friend knows
    that Aman believes in luck. So the friend gave him a problem as a birthday gift. The problem
    was the lucky number. The lucky numbers are the positive integers whose decimal representations
     contain only the digits 4 or 7. For example, numbers 47, 474, 4 are lucky and 3, 13, 567 are not. Aman
    has to find the minimum lucky number that has the sum of digits equal to N. He is trying to solve this problem
     and asks for help.
 */

#include<iostream>
using namespace std;

int main(){
  int t , n , sum ;
  cout<<"Enter number of test cases : "<<endl;
  cin>>t;

  for(int l=0;l<t;l++){
    cout<<"Enter the number :"<<endl;
    cin>>n;
    sum = n;
    int a = 0, b = 0; 
    while (sum > 0) 
      { 
	// Cases where all remaining digits 
	// are 4 or 7 (Remaining sum of digits 
	// should be multiple of 4 or 7) 
	if (sum % 7 == 0) 
	  { 
	    b++; 
	    sum -= 7; 
	  } 
	else if (sum % 4 == 0) 
	  { 
	    a++; 
	    sum -= 4; 
	  } 

	// If both 4s and 7s are there 
	// in digit sum, we subtract a 4. 
	else
	  { 
	    a++; 
	    sum -= 4; 
	  } 
      } 

    if (sum < 0) 
      { 
	printf("-1 \n"); 
      } 

    if(a!=0 || b!=0){
      for (int i=0; i<a; i++) 
	printf("4"); 
      for (int i=0; i<b; i++) 
	printf("7"); 
    }
    cout<<endl;
   }
    return 0;
  }
