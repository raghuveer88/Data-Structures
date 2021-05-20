#include<stdio.h>

int stack1[10];
int stack2[10];
int max = 10;
int top1 = -1;
int top2 = -1;
void push1(int n);
int pop1();
void push2();
void display();


void push1(int n){
    if(top1 == max-1)
    printf("stack1 is full\n");
    else{
        top1 = top1+1;
        stack1[top1] = n; 
    }
    
}

int pop1(){
    if(top1 == -1)
    printf("stack1 is empty\n");
    else{
        
        top1 = top1-1;
        return stack1[top1+1];
    }
}  

void push2(){
    if(top2 == max-1)
    printf("stack2 is overflow\n");
    else{
        for(;top1>=0;){

        top2 = top2+1;
        stack2[top2]=pop1();
        
        }
      }  
    }

void display(){
    if(top2 == -1)
    printf("stack is empty\n");
    else{
        for(int i=top2;i>=0;i--){
            printf("%d ,",stack2[i]);
        }
    }
}


int main(){
    int top1 = -1;
    int top2 = -1;
   push1(1);
   push1(2);
   push1(3);
   push1(4);
   push2();
   display();

   
 return 0;
}