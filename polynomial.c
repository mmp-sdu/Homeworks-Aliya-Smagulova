#include <stdio.h>
#include <math.h>
int power(int base, int exponent)
{
int result=1;
for (exponent; exponent>0; exponent--)
{
result = result * base;
}
return result;
}
int main(void) 
{
    int array [10]={2,3,5,7,8,9,4,6,7,1};
int x=2;
 printf("multiplied polynomials");
for(int i=1;i<10;i++)
{   
    printf("%d, ",x*power(array[i],i));
    
}
    
     return 0;
}
  