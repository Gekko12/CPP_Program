#include<iostream>
using namespace std;

int  main(){
  int t , n , temp , k , store ;

  cout<<"Enter the number of test cases:";
  cin>>t;

  for(int i=0;i<t;i++){
    cout<<"Enter the array size :";
    cin>>n;

    int ary[n];
    cout<<"Enter the array elements :"<<endl;
    for(int j=0;j<n;j++)
      cin>>ary[j];
    
    cout<<"Enter the number of rotation or shifts :";
    cin>>k;

    if(k > n)
      k = k % n; //Optimization to reduce execution time 

    while(k--){
      temp = ary[0];

      for(int j=0;j<n;j++){
	if( j < n-1){
	store = ary[j+1];
	ary[j+1] = temp;
	temp = store ;
	}
	if(j == n-1){
	  ary[0] = temp;
	}
      }
    }

      for(int j=0;j<n;j++)
	cout<<ary[j]<<"\t";

      cout<<endl;
    }
  return 0;
}
