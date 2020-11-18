#import <stdio.h>
//x y *pointer
void swap(int *xp, int *yp){
    int number=*xp;
    *xp=*yp;
    *yp=number;
}

void bubbleSort(int array[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main(){
      int i, count, number[25];

//   printf("How many elements are u going to enter?: ");
  scanf("%d",&count);

//   printf("Enter %d elements: ", count);
  for(i=0;i<count;i++)
      scanf("%d",&number[i]);
      
    

  bubbleSort(number,count);

//   printf("Order of Sorted elements: ");
  for(i=0;i<count;i++)
      printf(" %d",number[i]);

  return 0;
}