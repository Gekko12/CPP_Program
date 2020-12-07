/*
    There are two Rectangular photo frames. Find if the given two frames overlap or not.
     A frame is denoted by providing the x and y coordinates of two points: the left top corner and
     the right bottom corner of the frames. Two frames sharing a side are considered overlaid.
 */

#include<iostream>
using namespace std;

struct Point 
{ 
	int x, y; 
}; 


bool doOverlap(Point l1, Point r1, Point l2, Point r2) 
{ 
    // If one rectangle is on left side of other 
    if (l1.x >= r2.x || l2.x >= r1.x) 
        return false; 
  
    // If one rectangle is above other 
    if (l1.y <= r2.y || l2.y <= r1.y) 
        return false; 
  
    return true; 
} 
  

int main(){
  int t , flag ;

  cout<<"Enter the number of test cases :";
  cin>>t;

  for(int i=0;i<t;i++){
    cout<<"Enter the co-ordinates of 1st photo frame (leftmost(x,y),rightmost(x,y)) :"<<endl; 
    	Point l1 ;
	  cin>>l1.x>>l1.y; 
	Point r1 ;
	  cin>>r1.x>>r1.y;  
 

    cout<<"Enter the co-ordinates of 2nd photo frame (leftmost(x,y),rightmost(x,y)) :"<<endl; 
    	Point l2 ;
	  cin>>l2.x>>l2.y; 
	Point r2 ;
	  cin>>r2.x>>r2.y;
    
	  flag = doOverlap(l1, r1, l2, r2);


    if(flag == 1)
      cout<<"Overlap ie. 1"<<endl;
    else
      cout<<"Don't Overlap ie. 0"<<endl;
  }
  return 0;
}
    
