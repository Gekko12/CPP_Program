/*
   An element is a leader if it is greater than all the elementsto its right side 
   and the rightmost element is always a leader .
   Ex.  ary{16 , 17 , 4 , 3 , 5 , 2}          <---- start search from end side
          Leader :- 2 , 5 17
*/
#include<iostream>
using namespace std;

int main(){
  int t , n , max ;

  cout<<"Enter the number of test cases :";
  cin>>t;

  for(int i=0;i<t;i++){
    cout<<"Enter the array size :";
    cin>>n;

    int ary[n];
    cout<<"Enter the array elements :"<<endl;
    for(int j=0;j<n;j++)
      cin>>ary[j];

    max = ary[n-1];
    cout<<"Leaders in array :-"<<endl<<max<<" ";

    for(int j=n-2;j>=0;j--){
      if(ary[j] >= max){
	max = ary[j];
	cout<<max<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
