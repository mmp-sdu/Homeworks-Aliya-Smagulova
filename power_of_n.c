#include <stdio.h>

int main(void) {
  int a;//int - тип данных 
  int n;
  int result=1;
  printf("Enter a number: ");
  scanf("%d", &a); //* //&

  printf("Enter a power: ");
  scanf("%d", &n);

  while(n!=0){
    result=result * a; //n=3 result=1*3=3(result1)
    n--;
  };
  //n=2 result=3*3=9;
  //=1 result=9*3=27;
  //n=0
  

  printf("%d\n", result);
  return 0;
} 