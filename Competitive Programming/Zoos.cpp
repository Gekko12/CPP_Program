/*
You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively. The input word is considered 
similar to word zoo if 2x = y
Determine if the entered word is similar to word zoo.
For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format
    First line: A word that starts with several Zs and continues by several Os.
    Note: The maximum length of this word must be 20

Output format
Print Yes if the input word can be considered as the string zoo otherwise, print No.

*/
#include <iostream>
#include <string.h>
#define MAX 21
using namespace std;

int main() {
	int x , y;
	x = y = 0;
	char str[MAX];
	cin.getline(str,MAX);

	for(int i=0;i<MAX;i++){
		if(str[i] == 'z')
		 x++;
		if(str[i] == 'o')
		 y++; 
	}

	if(y == 2*x)
	 cout<<"Yes \n";
	else
	 cout<<"No \n"; 
    return 0;
}
