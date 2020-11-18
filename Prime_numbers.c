#include <stdio.h>

int main(){
    int a, b, end, isPrime;
    printf("Prime numbers from 1 to N");
    scanf("%d", &end);
    printf("Prime numbers %d:\n", end);
    for(a=2; a<=end; a++){
        isPrime = 1;
        for(b=2; b<=a/2; b++)
        {
            if(a%b==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d, ", a);
        }
    }
	return 0;
  }
  