#include<stdio.h>



int stack[10];
int top =-1;
int max = 10; 
void push();
void pop();
void display();

void push(){
  if(top >= max-1)
  printf("stack is full\n");
  else{
      int x;
      printf("enter the push value\n");
      scanf("%d",&x);
      top = top + 1;
      stack[top]= x;
  }

}

void pop(){
    if(top == -1)
    printf("stack is empty\n");
    else{
        printf("poped value is %d\n",stack[top]);
        top = top-1;

    }
}

void display(){
    if(top == -1){
        printf("the stack is empty\n");
    }
    
    if(top >= 0){
        printf("the elements in the stack are\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    if(top == max-1){
        printf("the stack is full\n");
    }
}



int main(){
    int c;
    while(1){
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    
    printf("\n enter operation number\n");
    scanf("%d",&c);
    switch(c){
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("\n\t EXIT");
            break;
        }
        default:{
            printf("\n\t please enter proper number\n");
            
        }
     }
     while(c == 4)
     return 0;
    }

}
