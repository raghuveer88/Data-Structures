#include<stdio.h>

int main(){
int a[10],i,j,n;
  printf("enter the number of array element\n");
  scanf("%d",&n);

  printf("enter the array elements\n");

  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
printf("even numbers are\n");
  for(j=0;j<n;j++){
      if(a[j]%2==0){
          printf("%d\n",a[j]);
          
      }
  }
  printf("odd numbers are\n");
  for(j=0;j<n;j++){
      if(a[j]%2==1){
          printf("%d\n",a[j]);
      }
  }

    return 0;
}