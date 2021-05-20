#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
    int data;
    struct node *next;

}*head,*temp,*fnnode;

void create_list(int n);
void display_list();

void create_list(int n){
    int x;
    printf("enter the head data value\n");
    scanf("%d",&x);
    head = (struct node*)malloc(sizeof(struct node));
    head->pre = NULL;
    head->data = x;
    head->next = NULL;

    temp = head;
    int a;
    for(int i=2;i<=n;i++){
        fnnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data for %d node\n",i);
        scanf("%d",&a);

        fnnode->data = a;
        temp->next = fnnode;
        fnnode->pre = temp;
        fnnode->next = NULL;
        temp = temp->next;

    }
}

void display_list(){
    if(head == NULL){
        printf("sorry no list\n");
    }
    temp = head;
    while(temp != NULL){
        printf("pre - %p ,node - %p ,node data - %d , next node - %p\n",temp->pre,temp,temp->data,temp->next);
        temp = temp->next;
    }
}

int main(){
int n;
printf("enter no:of nodes you want in the list\n");
scanf("%d",&n);

 create_list(n);
 display_list();

    return 0;
}