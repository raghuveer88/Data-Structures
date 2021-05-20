#include<stdio.h>

int main(){
    int a[10],i,j,n;
  printf("enter the number of array element\n");
  scanf("%d",&n);

  printf("enter the array elements\n");

  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }

  printf("the arrray element are\n");
  for(i=0;i<n;i++){
      printf("%d",a[i]);
  }
  return 0;
}