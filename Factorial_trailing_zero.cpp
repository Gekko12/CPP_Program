/* 
   To find the trailing zeroes in a number.
   Eg. 3! = 0 trailing zeroes as 3!=6
       5! = 1  as 5!=120 
       10! = 2 as 10!=3628800
       
       To count the trailing zeroes we have to check the number of 5's ie.
       100! = 100/5 + 100/25 + 100/125 = 20+4+0 = 24 trailing zeroes
       60! = 60/5 + 60/25 + 60/125 = 12+2+0 = 14
       1024! = 1024/5 + 1024/25 + 1024/125 + 1024/625 + 1024/3125 = 204+40+8+1+0=253
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll num ,res ,five;
  int t;
  cin>>t;

  while(t--){
    cin>>num;
    res=0;
    five=1;

    do{
      five *= 5; 
      res += num/five;
    }while(five<=num);

    cout<<res<<"\n";
  }
  return 0;
}
  
