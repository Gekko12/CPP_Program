//Program to count number of objects created

#include<iostream>
using namespace std ;

class test
{
  static int count;
public:
  test()
  {
    cout<<"Obj "<<++count<<" created"<<endl;
  }

   void countobj()
  {
    printf("Number of objects created : %d \n\n",count);        //printf() also works
  }
}obj1,obj2,obj3,obj4;

int test :: count ;

main()  //Compiler throw Warning as type not specified , but by default it's INT 
{
  obj1.countobj();
  return 0;
}
