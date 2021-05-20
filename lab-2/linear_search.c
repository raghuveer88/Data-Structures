#include<stdio.h>

int main(){
 int b,a[5],i;
  
  printf("enter array elements\n");
   for(i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
    
     printf("enter the desired element\n");
       scanf("%d",&b);

       for(i=0;i<5;i++){
           if(a[i]==b){
               printf("the poision of the desired element is %d\n",i+1);
           }
       }

    return 0;
}