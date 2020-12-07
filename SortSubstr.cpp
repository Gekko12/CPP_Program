#include <bits/stdc++.h>
using namespace std;

void strOrder(char s[] ,char t[] ,int from ,int to);

main(void){

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  char str[10000] ,order[10000];
  cin>>t;

  while(t--){
    scanf("%s",str);

    int from ,to;
    cin>>from>>to;

    strOrder(str ,order ,from ,to);

    printf("%s \n",order);
  }
  return 0;
}

void strOrder(char s[] ,char t[] ,int from ,int to)
{
  int k=0 ,i;
  int ary[27];
  memset(ary ,0 ,sizeof(ary));

  for(i=0;i<from;i++)
    t[k++] = s[i];

  for(i=from;i<=to;i++){
    ++ary[s[i] -97]; //using mapping
  }


  for(int j=26;j>=0;j--){
    if(ary[j]){
      while(ary[j]){
	t[k++] = j + 'a';
	ary[j] = ary[j] -1;
      }
    }
  }
	
  for(i=to+1;s[i]!='\0';i++)
    t[k++] = s[i];

  t[k++] = '\0';
}
