#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n;
	cout<<"Enter the number of test cases :";
	cin>>t;
	 long long f=1,s=1,temp;
	 int count;
	for(int i=0;i<t;i++){
	  cout<<"Enter the position :";
	    cin>>n;
	    count=0;
	    f=1,s=1;
	    int iter=0;
	    while(count!=n)
	    {
	        temp=(f+s)%1000000007;//%100000000000;
	        f=s;
	        s=temp;//cout<<s<<" ";
	       
	        if(iter%3==0)count++;
	         iter++;
	    }
	    cout<<"Number = "<< s%1000000007<<endl;
	}
	return 0;
}
