#include<stdio.h>
 
 int binary_search(int a[],int low,int high,int x){
    int mid = (low+high)/2;
    if(low>high){
        return -1;
    }
    if(low<high){
    if(a[mid]==x){
        return mid;
    }
   if(a[mid]<x){
       return binary_search(a,mid+1,high,x);
   }
   else
   {
       return binary_search(a,low,mid+1,x);
   }
    } 
   
 }

int main(){
   int a[100],N,pos,x;
   printf("enter the length of array\n");
   scanf("%d",&N);

 printf("enter array elements\n");
   for(int i=0;i<N;i++){
       scanf("%d",&a[i]);
   }

 printf("enter the desired element\n");
   scanf("%d",&x);

 pos = binary_search(a,0,N-1,x);

 if(pos<0){
     printf("the search is unsuccesful\n");
 }
  else
  {
      printf("the number %d is located in %d position\n",x,pos+1);
  }
  

   return 0; 
}