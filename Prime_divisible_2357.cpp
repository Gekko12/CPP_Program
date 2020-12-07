/*
    You have given only these prime numbers 2, 3, 5 and 7. You have to find the minimum number of length N, 
    such that it is simultaneously divisible by all given prime numbers (2, 3 5 and 7). A number's length is the number 
    of digits in its decimal representation without leading zeros.
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  //write your code here
  int n , start , min , end , lstart =0 ;
  int ary[]={50,80,170,20,200,110};
  cin>>n;
  
  if(n < 3){
   min = -1;
     cout<<min<<endl;
   }  // as 2*3*5*7 = 210 ie. 3 digits
  else if(n == 3){
   min = 210;
     cout<<min<<endl;
}
  else if(n < 10){
    start = pow(10,n-1);
    end = pow(10,n);
    
    for(int i=start;i<=end;i++){
      if( i%2==0 && i%3==0 && i%5==0 && i%7==0){
        min = i;
        break;
      }
    }
      cout<<min<<endl;

  }
  else{
    cout<<"1";
    for(int i=1;i<n-3;i++)
     cout<<"0";
     
    for(int i=10;i<n;i++){
       ++ lstart;
      if(lstart == 6)
         lstart = 0;
    }
   
    if(lstart==0 || lstart==1 || lstart==3)
     cout<<"0";
    
    cout<<ary[lstart]<<endl;
  }
   
  return 0;
}
