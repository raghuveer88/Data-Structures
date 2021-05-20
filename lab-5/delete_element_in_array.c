#include<stdio.h>
int delete_element(int a[],int n,int pos){
 int i;
 if(pos<0) {
 printf("under flow\n");
 
 }
 else if(pos>n){
 printf("overflow\n");
 
 }
 else{
     for(i=pos-1;i<n-1;i++){
         a[i]=a[i+1];
     }
 
 for(i=0;i<n-1;i++){
     printf("%d ",a[i]);
 }
 }
}

int main(){
int a[10];
int size,i,pos;

printf("enter the size of the array\n");
scanf("%d",&size);

printf("enter the array elements\n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("enter the position of the element you want to delete in the array\n");
scanf("%d",&pos);



delete_element(a,size,pos);

    return 0;
}