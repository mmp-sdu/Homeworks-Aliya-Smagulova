#include <stdio.h>
int main(){
  int a,b;
  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);
  int i=0;
  int gcd=0; //5 10
  for(i=1; i<=a && i<=b;i++){ //i=1 i<=5 i+=1
    if(a%i==0 && b%i==0){ //5%1=0 10%1=0
    
      gcd=i; 
    }
  }
  printf("%d", gcd);



  return 0;
}