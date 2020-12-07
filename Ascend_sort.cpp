#include <bits/stdc++.h> //For <algorithm> ,<vector> ,<iostream> and all basic header files covered

using namespace std;
int main(){
  ios_base::sync_with_stdio(false); //For fast I/O to enhance the speed of cin/count
  cin.tie(NULL); //This will take fast I/P , but if we put cout.tie(NULL) then 
  

  int n;
  cout<<"Enter the size of array :"; //This is not going to print at starting , first it will take all input and then print o/p stmt.
  cin>>n;
  vector<int> ary(n);

  cout<<"Enter "<<n<<" elements :"; 
  for(int i=0;i<n;i++)
    cin>>ary[i];

  cout<<"\nSorted array in ascending order :\n";
  sort(ary.begin() ,ary.end()); //If we put sort(ary.rbegin(), ary.rend()); then it sorts in descending order

  for(int i:ary)
    cout<<i<<" ";


  return 0;
}
