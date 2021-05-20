#include<stdio.h>
 struct Rational{
     int num;
     int den;
 };
int check(struct Rational a,struct Rational b){
    if(a.num*b.den == b.num*a.den){
        return 0;
    }
    if(a.num*b.den > b.num*a.den){
        return 1;
    } 
    return -1;
}
int binary_search(struct Rational a[],int low,int high,struct Rational x){
    int mid = (low +high)/2;
    if(check(a[mid],x)==0){
        return mid;
    }
    if(check(a[mid],x)>0){
        return binary_search(a,low,mid-1,x);
    }
    else
    {
        return binary_search(a,mid+1,high,x);
    }
  return -1;   
}

    int main() 
{ 
    struct Rational a[4] = {{1, 5}, {2, 3}, {3, 2}, {13, 2}}; 
    struct Rational x = {3, 2}; 
    int pos = binary_search(a,0,3,x);
    printf("Element found at index %d",pos+1); 
 


    return 0;
}