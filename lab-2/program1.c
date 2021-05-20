#include<stdio.h>

int main(){
    int a[10],i,j,n;
    int count=0;
  printf("enter the number of array element\n");
  scanf("%d",&n);

  printf("enter the array elements\n");

  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(a[j]==a[i]){
              count+=1;
              
             
          }
           
         
      }
      if(count!= 0){
          printf("%d element repeated %d times\n",a[i],count-1);

      }
     count = 0;

  }
printf("the total no of dulpicate elements are %d",count);
    return 0;
}