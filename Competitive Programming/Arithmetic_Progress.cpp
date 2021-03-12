/*
  You are given an integer sequence a1, a2,..., an of length n. You have to analyze the sequence.
  The task is to find all values of x, for which these two conditions hold.
  1. x occurs in sequence a.
  2. Consider all positions of numbers x in the sequence a (such i, that ai = x ).
  These numbers, sorted in the increasing order, must form an arithmetic progression. 
  Find all x that meets the problem conditions.
*/


#include<stdio.h>

#include<math.h>

#include<stdlib.h>

int main(){

  int t;

  float a,b,c;

  float x,y;

  float z;

  scanf("%d",&t);

  for(int i=0;i<t;i++){

    scanf("%f %f %f",&a,&b,&c);

    x=b-a;

    y=c-b;

    if(x==y){

      printf("0\n");

    }

    else{

      z=round(fabs((x-y))/2);

      printf("%.f\n",z);

    }
  }
  return 0;
}
