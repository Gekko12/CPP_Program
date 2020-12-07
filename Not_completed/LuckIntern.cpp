/*
  Laxmi Chit Fund is planning to hire interns to derive an algorithm which can apply the law of "Ek ka Double" on
  any input object. Since this is going to be a complex task and the algorithm is supposed to be derived within 21
  days, they are planning to hire ITUS undergraduates. (ITUS, also known as International Talent of Ultimate Student
  is an extremely rigorous degree which can only be obtained by very few ultimately talented, extremely competent
  students.)

  Anuradha, the project manager of Laxmi Chit Fund, is a mathematically superstitious woman and believes that any
  group will be able to make the algorithm only if that group is lucky enough. She has already made M
  groups out of the N students who applied for the internship, and assigned a Project Guides having luck ≥2
  for each Group.

  She defines the luck of a group as product of lucks of all the students in that group, modulo the luck of Project
  Guide for that Group. Now, she wants to maximize the luck of each group. She can remove any number of students
  (possibly 0) from any Group to maximize the luck of that group. Being superstitious, she won't allow the removed
  students to do internship at Laxmi Chit Fund, also she won't change the group of any student. In other words, any
  student either works in the already assigned Group, or is not allowed to do internship.

  Please help Anuradha to calculate the maximum achievable luck for each Group.

  Input
  First line contains T

  the number of testcases.
  First line of each testcase contains two integers N
  and M
  , the number of students and the number of Groups respectively.
  Second line of testcase contains N
  space separated integers, ith of these denotes Gi, i.e. the Group to which the ith student belongs. (for 1≤i≤N
  )
  Third line of the testcase contains N
  space separated integers, ith of these denotes Li, i.e. the luck of ith student. (for 1≤i≤N
  )
  Fourth line of testcase contains M
  space separated integers, ith of these denotes LGi, i.e. the luck of the Guide of ith Group. (for 1≤i≤M

  )

  Output
  For each testcase, print a single line containing M space separated integers, ith integer MLi should denote the
  maximum luck of ith Group.

  Constraints
  1≤T≤10
  1≤N≤160
  ⌈N16⌉≤M≤N
  1≤Gi≤M
  0≤Li≤109
  2≤LGi≤109
  Each Group has at least 1
  member
  Each Group has at most 16
  members

  Sample Input
  2
  5 3
  1 2 1 3 3
  7 8 2 15 1
  14 19 8
  2 1
  1 1
  3 6
  6

  Sample Output
  7 8 7
  3

  Explanation
  Testcase 1:
  For Group 1 , i.e. {1,3}, maximum luck can be achieved by excluding the 3rd student, now the Group becomes {1},
  and has luck =7mod14=7
  
  For Group 2
  , i.e. {2}, maximum luck is 8, since 8mod19=8
  .

  For Group 3
  , i.e. {4,5}, one possible way to maximize luck is to keep the Group unchanged, i.e. 15∗1mod8=7 , this is the
  maximum achievable luck.

  Testcase 2: Excluding 2nd
  student gives maximum luck.


  Solution:
  On analysing the constraints, we can conclude that:

  Maximum possible number groups, with each group having maximum possible number of elements (i.e. 161616) is 
  MaxN16=16016=10\frac{MaxN}{16}=\frac{160}{16}=1016MaxN​=16160​=10.
  Hence, if we generate all subsets in this scenario, maximum iterations will be 10∗216=65536010*2^{16} = 
  65536010∗216=655360, which is affordable in given time constraints.

  Hence, we can can maintain MMM arrays (or any similar structure) such that the ithi^{th}ith
  structure (for 1≤i≤M1\leq i \leq M1≤i≤M) will contain all the elements which belong to the ithi^{th}ith group.

  Now, for each group, we can recursively calculate the required value for each subset of that group. The recursive
  function will make exactly 2 calls, one call will include the current element and other call will not include
  the current element.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <ll> vll;

vector <vll> G;             //This will store non-zero lucks in Groups 
vll g,l,lg;

void go(ll group,ll index,ll luck,ll& ans)
{
  if(index==G[group].size())                              //Base Case
    {
      ans=max(ans,luck);                                  //Update ans
      return;
    }
  go(group,index+1,(luck*G[group][index])%lg[group],ans); //Include
  go(group,index+1,luck,ans);                             //Exclude
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll T,n,m,i;
  cin>>T;
  while(T--)
    {
      cin>>n>>m;

      //Initialization
      g.assign(n+1,0);
      l.assign(n+1,0);
      lg.assign(m+1,0);
      G.assign(m+1,vll());
        
      for(i=1;i<=n;++i) cin>>g[i];            //Group of students
      for(i=1;i<=n;++i) cin>>l[i];            //Luck of students
      for(i=1;i<=m;++i) cin>>lg[i];           //Luck of Guide

      for(i=1;i<=n;++i) if(l[i]%lg[g[i]])     //Exclude 0's (& remainder 0's too)
			  G[g[i]].push_back(l[i]%lg[g[i]]);   //Add non-zero lucks to Group

      for(i=1;i<=m;++i)
        {
	  ll ans=1;
	  go(i,0,1,ans);                      //recursive bruteforce
	  if(G[i].empty()) ans=0;             //Group Luck = 0 case
	  cout<<ans<<" ";
        }
      cout<<"\n";
    }
  return 0;
}
