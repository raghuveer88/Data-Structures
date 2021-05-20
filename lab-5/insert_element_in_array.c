#include<stdio.h>

int insert_element(int a[],int n,int pos,int value){
    int i;
 if (a[n-1]!=0)
     printf("stack over flow\n");
 else{
     for(i=n-1;i>=pos-1;i--){
         a[i+1]=a[i];
     }
     a[pos-1]=value;
 
 for(i=0;i<=n-1;i++){
     printf("%d ",a[i]);
  }
 }
}

int main(){
int a[10];
int size,i,pos,value,k;

printf("enter the size of the array\n");
scanf("%d",&size);

for(i=0;i<size;i++){
    a[i]=0;
}
printf("enter the no of array elements you want\n");
scanf("%d",&k);
printf("enter the array elements\n");
for(i=0;i<k;i++){
scanf("%d",&a[i]);
}
printf("the array elements are\n");
for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}
printf("enter the position of the element you want to store in the array\n");
scanf("%d",&pos);

printf("enter the value of the array you want to insert\n");
scanf("%d",&value);

insert_element(a,size,pos,value);

    return 0;
}