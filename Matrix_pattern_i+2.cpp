/*
  1         3        6       10       15      21       28    .......
    \0+2/  \1+2/  \2+2/  \3+2/  \4+2/  \5+2/  \6+2/ ......
 */

#include<iostream>
using namespace std;

int main(){
  int t , n , sum , count ;
  cout<<"Enter the test cases : \n";
  cin>>t;

  while(t--){
    cout<<"Enter N (no. of col) for sq[] matrix :\n";
    cin>>n;

    struct Store{
      int value , flag = 0;
    }obj[n*n];

    sum = 1;
    obj[0].value = sum; cout<<sum<<" ";

    for(int i=0;i<n*n-1;i++){
      sum += i + 2;
      obj[i+1].value = sum; cout<<sum<<" ";
    }
  }
  return 0;
}
