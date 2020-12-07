#include<bits/stdc++.h>

using namespace std;

int main()
{
  char str[]="change";
  cout<<"str[] = "<<str<<endl;
  memset(str ,'*',sizeof(str));
  cout<<"New str[] = "<<str<<endl; // I think it will work fine for integers to set 0 and -1

  int ary[]={1 ,2 ,3 ,4 ,5};
  memset(ary, 0, sizeof(ary));
  for(int i=0;i<5;i++)
    printf("%d ",ary[i]);
  printf("\n\n");
  return 0;
}
  
