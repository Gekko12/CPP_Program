/*
  There are N athletes (numbered 1 through N) in a line. For each valid i, the i-th athlete starts at the position 
  i and his speed is Vi, i.e. for any real number t≥0, the position of the i-th athlete at the time t is i+Vi⋅t

  
  Unfortunately, one of the athletes is infected with a virus at the time t=0

  . This virus only spreads from an infected athlete to another whenever their positions are the same at the same
  time. A newly infected athlete may then infect others as well.

  We do not know which athlete is infected initially. However, if we wait long enough, a specific set of athletes
  (depending on the athlete that was infected initially) will become infected. Your task is to find the size of
  this set, i.e. the final number of infected people, in the best and worst possible scenario.
  Input

  The first line of the input contains a single integer T

  denoting the number of test cases. The description of T
  test cases follows.
  The first line of each test case contains a single integer N
  .
  The second line contains N
  space-separated integers V1,V2,…,VN

  .

  Output

  For each test case, print a single line containing two space-separated integers ― the smallest and largest final number of infected people.
  Constraints

  1≤T≤10^4

  3≤N≤5
  0≤Vi≤5
  for each valid i

  Subtasks

  Subtask #1 (1 point): N=3

  Subtask #2 (99 points): original constraints
  Example Input

  4
  3
  1 2 3
  3
  3 2 1
  3
  0 0 0
  3
  1 3 2

  Example Output

  1 1
  3 3
  1 1
  1 2

  Explanation

  Example case 1: No two athletes will ever have the same position, so the virus cannot spread.

  Example case 2: It does not matter who is initially infected, the first athlete would always spread it to everyone.

  Example case 3: The athletes are not moving, so the virus cannot spread.

  Example case 4: The best possible scenario is when the initially infected athlete is the first one, since he
  cannot infect anyone else. In the worst possible scenario, eventually, the second and third athletes are infected.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void rec(vector<vector<double>> a, set<ll> &s, ll p, ll n, double t)
{
  ll i;
  for (i = 0; i < n; i++)
    {
      if (a[p][i] > t)
        {
	  s.insert(i);
	  rec(a, s, i, n, a[p][i]);
        }
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  ll t;
    
  cin >> t;
  while (t--)
    {
      ll n ,i ,j;
      double d1;
        
      vector<ll> v, ba, sa;
      set<ll> s; //As set store's unique elements and remove duplicates
	
      cin >> n;
	
      ll ar[n];
	
      vector<vector<double>> a(n, vector<double>(n, 0)); //2D double vector init with 0
	
      for (i = 0; i < n; i++)
        {
	  cin >> ar[i];
        }
	
      for (i = 0; i < n; i++)
        {
	  for (j = 0; j < n; j++)
            {
	      if (ar[i] == ar[j])
                {
		  a[i][j] == -1; //If v1 == v2 
                }
	      else
                {
		  d1 = (i - j) / float(ar[j] - ar[i]); //For time at which two athle meets
		  if (d1 <= 0)
                    {
		      a[i][j] = -1;
                    }
		  else
                    {
		      a[i][j] = d1;
                    }
                }
            }
        }
      for (i = 0; i < n; i++)
        {
            
	  s.insert(i);
	  rec(a, s, i, n, 0);
	  v.push_back(s.size());
	  s.clear();
        }
 
      cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << "\n";
    }
  return 0;
}
