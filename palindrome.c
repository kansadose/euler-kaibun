/*palindrom.c*/
#include<stdio.h>
#include"palin.h"

int main(void){
  int max;
  int a[2];
   
  if( (max = max_palindrome(max,a)) == -1) printf("not found\n");
  else printf("find %d = %d * %d\n",max,a[0],a[1]);
}
