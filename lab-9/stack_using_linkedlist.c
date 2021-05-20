#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*stnode,*fnnode,*temp;

int top = -1;
int max = 10;

void push(int n);
void pop();
void display();

int main(){
    int ch,n;
    printf("the size of stack\n");
    scanf("%d",&n);
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    while(1){
        printf("choose your option\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                push(n);
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
                printf("\n\t exit\n");
                break;
            }
            default :{
                printf("please i beg you to enter proper number or else i will slap you\n");
            }
        }
        while(ch==4)
        return 0;
    }
} 

void push(int n){
    int d;
    if (top >= n-1){
        printf("stack is overflow\n");
        
    }
else{
    if (stnode == NULL){
        printf("the data you want to push\n");
        scanf("%d",&d);
        stnode = (struct node*)malloc(sizeof(struct node));
        stnode->next = NULL;
        stnode->data = d;
        top++;
    }
    else{
        temp = (struct node*)malloc(sizeof(struct node));
        printf("the data you want to push\n");
        scanf("%d",&d);
        temp->next = stnode;
        temp->data = d;
        stnode = temp;
        top++;
    }
 }
}

void pop(){
    fnnode = stnode;
    if(top <= -1){
        printf("sorry dude stack is underflow\n");
    }
    else{
        printf("the poped value is %d\n",stnode->data);
        fnnode = fnnode->next;
        free(stnode);
        stnode = fnnode;
        top--;
    }

}

void display(){
    fnnode = stnode;
    if(top == -1)
    printf("sorry empty stack\n");

    else{
        while(fnnode != NULL){
            printf("%d, ",fnnode->data);
            fnnode = fnnode->next;
        }
    }
}