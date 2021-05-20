#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
typedef struct {
int item[SIZE];
int front;
int rear;
}queue;

void instack(queue*q){
q->front=0;
q->rear=0;
}

void enqueue(queue *q,int n){
if(q->rear==SIZE){
printf("Overflow\n");
}
else{


q->item[q->rear]=n;
q->rear++;
}
}
int dequeue(queue *q){
int v;
if(q->rear==q->front){
printf("Underflow\n");
}
else{
v=q->item[q->front];
q->front++;
return v;
}
}
void push(queue *q){
int n;
printf("Enter value to add to stack\n");
scanf("%d",&n);
enqueue(q,n);
}
int pop(queue*q,queue *k){
int d;
int s;
int temp;
for(int i=q->front;i<q->rear-1;i++){
enqueue(k,dequeue(q));
}
d=dequeue(q);
for(int i=k->front;i<k->rear;i++){
enqueue(q,dequeue(k));
}
return d;
}
void display(queue*q){
int i;
for(int i=q->front;i<q->rear;i++){
printf("%7d\n",q->item[i]);
printf("\n");
}
}
void menu(){
printf("Enter 1 to push\n");
printf("Enter 2 to pop\n");
printf("Enter 3 to display\n");
printf("Enter 4 to exit\n");
}
int main(){
int r;    
int ch;
queue q;
queue k;
instack(&q);
instack(&k);
menu();
 while (1)
    {
        printf("Enter choice=     ");
printf("\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(&q);
            break;
        case 2:
            
            r=pop(&q,&k);
            printf("%d has been popped\n",r);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }

    }
return 0;
}