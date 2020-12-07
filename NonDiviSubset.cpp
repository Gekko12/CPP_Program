#include<bits/stdc++.h>
using namespace std;

int nonDivisibleSubset(int, vector<int>);

int main(){
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  
  int n ,k;

  cin>>n>>k;
  vector<int> ary(n);
  for(int i=0;i<n;i++)
    cin>>ary[i];

  for(int i:ary)
    cout<<i<<" ";
  
  int result =  nonDivisibleSubset(k, ary);
  cout<<"Res = "<<result<<endl;

  return 0;
}

int nonDivisibleSubset(int k, vector<int> s) {
  
}
  
  
