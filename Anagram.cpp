/*
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character 
deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :
    test cases,t
    two strings a and b, for each test case

Output:
Desired O/p
Constraints :
string lengths<=10000

Note :
Anagram of a word is formed by rearranging the letters of the word.
For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

SAMPLE INPUT
1
cde
abc

SAMPLE OUTPUT
4

 */


#include <iostream>
#define MAX 10001

using namespace std;

int main() {
	char a[MAX] , b[MAX] ;
	int t , match , lena , lenb;
     
	cin>>t;

	while(t--){
		match = 0 ;
	    lena = lenb = 0;
		cin>>a;
		cin>>b;

       	for(int j=0;b[j]!='\0';j++)
		  lenb ++;
        
        for(int i=0;a[i]!='\0';i++){
			lena ++;
          for(int j=0;b[j]!='\0';j++){
			  if(a[i]==b[j]){
				b[j] = '*'; //  
			    match ++;
			    break;
			  }
		  }
		}
	cout<<"lena :"<<lena<<"lenb :"<<lenb<<"match :"<<match*2<<endl;
		cout<<(lena + lenb - match*2)<<endl;
	}

	return 0;
}
