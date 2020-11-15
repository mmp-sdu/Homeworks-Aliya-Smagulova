#include <stdio.h>
int main() {
    int count;
    printf("Enter number of fibonacci: ");

    scanf("%d", &count);
    int array[count];
    int temp;
    int n1=0;
    int n2=1;
    int n=0;

    for(int i=2;i<count;i++){
      array[i]=n1+n2;
      n1=n2;
      n2=array[i];
    }
    array[0]=0;
    array[1]=1;
    for(int i=0;i<count;i++){
      printf("%d ", array[i]);
    }
}