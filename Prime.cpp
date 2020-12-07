
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {

  if (n == 1) {
    return false;
  }

  if(n == 2){
    return true;
  }

  int num_sq = sqrt(n);

  for (int i = 2; i <= num_sq; i++) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t , num ;
    cout<<"Enter number of test  cases :";
    bool check ;
    cin>>t;
    while(t--){
      cout<<"Enter the number : ";
      cin>>num;
      check = isPrime(num);
      if(!check)
       cout<<"Not prime \n";
      else {
       cout<<"Prime \n";
      } 
    }
    return 0;
}
