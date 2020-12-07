/*
   Abhishek and Gaurav are the best friends, today is Gaurav's birthday, but
   Abhishek forgot to buy a gift for him. Gaurav is very angry with him. Abhishek has an idea for 
  a gift. Gaurav likes coding very much. So Abhishek gave him a problem to solve as his gift. Gaurav
  likes everything infinitely. Abhishek gave him a sequence problem, such that its first element is equal
   to A (S1=A), and the difference between any two adjacent elements is (Si - Si−1 = C. In particular, Gaurav
   wonders if his favorite integer B appears in this sequence, that is, there exists a positive integer i, such that Si = B.
   Gaurav is busy at his birthday party, he asks you to solve this problem.

 */

#include<iostream>
using namespace std;

int main(){
  long long t , a , b , c , store , check , ele , zeroc;

  cout<<"Enter the number of test cases :"<<endl;
  cin>>t;

  for(int i=0;i<t;i++){
    cout<<"Enter the serie's first number (a) , favourite (b) and difference b/w two numbers in series (c) respectively :"<<endl;
    cin>>a>>b>>c;

    ele = b;
    zeroc = ele - a + c ;

    if( zeroc == 0){ //Check for division by zero
      cout<<"No"<<endl;
      break;
    }
    
    store = ( ele - a + c ) / c ;
    check = a + ( store - 1 ) * c;
    if(check == b)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
}
