/*
  Write a program to arrange the dates of birth entered by user in ascending order. Given an integer n, where n is
  the number of dates entered. Dates are in the format Date/Month/Year.
  *Valid date will be considered!!

  Input
  The first line of the input contains a single integer "n" denoting the number of dates.
  The next line contains "n" dates .

  Output
  Print the arranged dates. 

  Constraints
  1 ≤n≤ 50
  1 ≤Date≤ 31
  1 ≤Month≤ 12
  Year can be anything.

  Test Cases:
  Example Input:
  2
  5/9/2010
  2/3/2007

  Example Output:
  2/3/2007
  5/9/2010

  Example Input:
  3
  9/9/2008
  8/9/2008
  12/11/2006

  Example Output:
  12/11/2006
  8/9/2008
  9/9/2008
*/

#include <bits/stdc++.h>
using namespace std;

struct Date
{
  int day ;
  int month ;
  int year ;
};

bool compare(Date a,Date b)
{
  if (a.year != b.year) 
    return a.year > b.year;
  
  if(a.month != b.month)
    return a.month > b.month;
  
  return (a.day > b.day); 
}


int main(void)
{
  int t;
  cin>>t;

  Date obj[t];

  for(int i=0;i<t;i++)
    {
      string date;
      cin>>date;
      
      stringstream ss(date); //similar to java StringTokenizer

      char ch; //To store '/'
      
      ss>>obj[i].day;
      ss>>ch;
      ss>>obj[i].month;
      ss>>ch;
      ss>>obj[i].year;
    }

  sort(obj ,obj+t ,compare);
  
  for(int i=t-1;i>=0;i--)
    cout<<obj[i].day<<"/"<<obj[i].month<<"/"<<obj[i].year<<"\n";
    
  return 0;
}
