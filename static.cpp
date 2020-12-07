#include<iostream>

using namespace std ;

class enclosing
{
  static int x ;       //Static member should  define outside the class , it's necessary
public :

  class nested
  {
    int x,y,add;
  public :
    void inputad(int,int);
    int displayad();
  };
  nested nesobj;

  static void count();
  static void disp();
};

int enclosing::x = 0; 

void enclosing :: count()
{
  x = x + 1;
}

void enclosing :: disp()
{
  cout<<"Static count :"<<x<<endl;
}

void enclosing :: nested :: inputad(int a , int b)
{
  x=a;
  y=b;
  add = x+y;
}

int enclosing :: nested :: displayad()
{
  return add ;
}

int main()
{
  enclosing enclobj;
  int a , b;
  cout<<"\n Enter two numbers :\n";
  cin>>a>>b;
  enclobj.nesobj.inputad( a , b );
  cout<<"\n Sum = "<< enclobj.nesobj.displayad()<<endl;
  cout<<"Size of int = "<<sizeof(int)<<"\nSize of enclosing class = "<<sizeof(enclosing)<<endl<<"Size of nested class = "
      <<sizeof(enclobj.nesobj)<<endl;
  enclobj.count();
  enclobj.disp();

  return 0;
}
  
