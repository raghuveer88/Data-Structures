#include<stdio.h>



int main(){
int a[10],i,n;
int sum=0;

 printf("enter the number of array element\n");
  scanf("%d",&n);

  printf("enter the array elements\n");

  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
printf("the sum of the array element\n");

  for(i=0;i<n;i++){
      sum = sum+a[i];
  }
printf("%d",sum);
    return 0;
}