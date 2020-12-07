//Program to show that static function can access only static data members

#include<iostream>
using namespace std;

class A
{
  static int x  ;  //Compulsary to define outside the class , to allocate memeory
  int y = 5;
public:
  static int a ;
  static int access()
  {
    cout<<"Static function  can access : "<<x;            // But cann't access <<y;
    x = x + 20 ;         //It can change value also
    return 0;
  }

  void norm_acc()
  {
    cout<<"\nNormal function can access static members also : "<<x<<"\t"<<y ;
    x = x + 5 ;
    y = y + 5;
    cout<<"\nNormal function can change the values of static members also : "<<x<<"\t"<<y ;
  }
}obj;

int A :: x = 10 ;  //Static members allocation of memory as well as initialisation
int A :: a = 100 ;

int main()
{
  cout<<endl;
  obj.access();
  obj.norm_acc();
  cout<<endl;
  cout<<"\nIn main funct we cann't access private static members but public we can  :"<<A::a<<endl;
}
  
