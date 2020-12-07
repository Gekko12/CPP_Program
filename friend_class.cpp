//Program to add two number using friend function
//Date: 03/03/2020


#include<iostream>

using namespace std;

class temp
{
  int x , y , add;
  friend void addn(temp &);  //Friend function can be declared inthe private section also

public :
  void input();
  void display();
}obj;

void temp::input()
{
  cout<<"Enter the  numbers :"<<endl<<"First num :";
  cin>>x;
  cout<<"Second num :";
  cin>>y;
}

void temp::display()
{
  cout<<"Sum = "<<add<<endl;
}

void addn(temp &t)
{
  t.add = t.x + t.y ;
}

int main()
{  
  obj.input();
  addn(obj);
  obj.display();

  return 0;
}
