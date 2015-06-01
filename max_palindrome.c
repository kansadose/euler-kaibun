/*max_palindrome.c*/
#include"palin.h"

int max_palindrome(int max,int a[2]){
  int i,l;
  int tmpmax = -1;
  for(i=999;i>99;i--){
    for(l=999;l>99;l--){
    max = i*l;
      if(check_palindrome(max)==1 && tmpmax<=max){ 
       a[0]=i; a[1]=l; 
       tmpmax=max;
      }
    }
  }  
     return tmpmax;
}
