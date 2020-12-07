/*
  Half birthday is the day that occurs exactly between two subsequent birthdays. You will be provided with Rock’s 
  birthdate and birth month, you will have to figure out his half birthday.

  Note
  Consider every year to be a leap year and all months are displayed in lowercase English characters.

  Input:
  The first line of the input contains a single integer T denoting the number of test cases.
  The description of each of the T test cases contains an integer d followed by a string, denoting month m
  Here d denotes day of a month and m  denotes the month of a year respectively.

  Output:
  For each test case print an integer d1
  followed by a string, denoting month m1  , 
  which overall denotes date and month of Rock’s half birthday.

  Constraints:
  1≤T≤105
  1≤d,d1≤31
  january≤m,m1≤december

  Sample Input:
  3
  15 january
  31 august
  10 october

  Sample Output:
  16 july
  1 march
  10 april

*/

#include<bits/stdc++.h>
using namespace std;



int solve()
{
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
  int t=0 ,d=0 ,m=0 ;
  string str;
  string year[] = {"NULL","january", "february", "march", "april", "may", "june", "july",  
          "august", "september", "october", "november", "december"};
  
  cin>>t;

  while(t--)
    {
      cin>>d;
      cin>>str;

      for(int i=0;i<year.size();i++)
	if(str==year[i])
	  m = i;
      
      
      int result = solve();
      cout<<result<<"\n";
    }
  return 0;
}
