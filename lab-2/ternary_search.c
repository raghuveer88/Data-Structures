#include<stdio.h>

int ternary_search(int a[],int low,int high,int x){
    if(low>high){
        return -1;
    }
   if(low<high){
       int part = (high-low)/3;
       int mid1 = low+part;
       int mid2 = high-part;
       if(a[mid1]==x){
           return mid1;
       }
       if(a[mid2]==x){
           return mid2;
       }
       if(a[mid1]>x){
           return ternary_search(a,low,mid1,x);
       }
       if(a[mid1]<x<a[mid2]){
           return ternary_search(a,mid1,mid2,x);
       }
       if(a[mid2]<x){
           return ternary_search(a,mid2,high,x);
       }
   }
   else
   {
       return -1;
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

 pos = ternary_search(a,0,N-1,x);

 if(pos<0){
     printf("the search is unsuccesful\n");
 }
  else
  {
      printf("the number %d is located in %d position\n",x,pos+1);
  }
  

   return 0; 
}