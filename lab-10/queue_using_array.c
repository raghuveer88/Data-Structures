#include<stdio.h>
#define max 5
int front = -1 ;
int rear = -1;
int q[5];
void insertion(int element);
void deletion();
void display();

int main(){
   
int ch,n,a;
while(1){
    printf("\n1. insertion\n2. deletion\n3. display\n 4.exit\n");
    printf("choose an option\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            printf("enter the insertion element\n");
            scanf("%d",&a);
            insertion(a);
            break;
        }
        case 2:{
            deletion();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("\n exit \n");
            break;
        }
        default :{
            printf("please enter proper number\n");

        }

    }
    while(ch == 4){
        return 0;
    }
  }
}

void insertion(int element){
    if(rear == max-1){
        printf("over flow\n");
    }
    else if(front == -1){
        front = 0;
        rear = 0;  
       q[rear] = element;
    }
    else{
        rear = rear +1;
        q[rear]= element;

    }
}

void deletion(){
    int key;
    if(front == -1|| front>rear){
        printf("under flow\n");
    }
    else{
         
        key = q[front];
         front = front + 1;
        printf("the deleted number is %d",key);
    }
    
}

void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ,",q[i]);
    }
    
}

