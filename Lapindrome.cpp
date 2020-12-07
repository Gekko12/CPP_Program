/*
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.

Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

Constraints:
    1 ≤ T ≤ 100
    2 ≤ |S| ≤ 1000, where |S| denotes the length of S

Example:
Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc

Output:
YES
NO
YES
YES
NO
NO

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

  char ary[1001];
  int left[127]; //Lowercase english alphabets
  int right[127];
  
 
  
  int t ,len=0 ,pos=0;
  string str;
  bool flag;
  cin>>t;

  while(t--){
    cin>>str;
    flag=true;

    memset(left ,0 ,sizeof(left));
    memset(right ,0 ,sizeof(right));
    
    for(len=0;str[len]!='\0';len++)
      ary[len] = str[len];
   
    
    for(int i=0;i<len/2;i++)
      ++left[ary[i]-'a'];
    
    
    if(len%2==0)
      pos = len/2;
    else
      pos = len/2+1;
    
    for(int i=pos;i<len;i++)
      ++right[ary[i]-'a'];

    for(int i=0;i<len;i++){
      if(left[ary[i]-'a']!=right[ary[i]-'a']){
	flag=false;
	break;
      }
    }

    if(flag)
      cout<<"YES \n";
    else
      cout<<"NO \n";
  }
  return 0;
}
