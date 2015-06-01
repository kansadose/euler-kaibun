/*check_palindrome.c*/

int check_palindrome(int max){
  int a[6]; 
  a[5] = max/100000;
  a[4] = (max%100000)/10000;
  a[3] = (max%10000 )/1000;
  a[2] = (max%1000  )/100;
  a[1] = (max%100   )/10;
  a[0] = max%10;


  if(a[5] != 0){ //6桁の場合 5 4 3,2 1 0
    if(a[5]==a[0] && a[4]==a[1] && a[3]==a[2]) return 1;
  }else{ //5桁の場合 4 3 ,2, 1 0 
    if(a[4]==a[0] && a[3]==a[1]) return 1;
  }

  return 0;

}
   
