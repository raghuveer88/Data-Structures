#include<time.h>

#include<stdlib.h>

#include<stdio.h>


struct node{

    int value;

    struct node* next; //Pointer to the next element in the list

};



int main()

{

    srand(time(NULL));

    struct node *root;       


    root = (struct node *) malloc( sizeof(struct node) );

    root->next = NULL;   

    root->value = 4;



    

    int size = 10;

    struct node* last = root;

    while(size-->0){

        last->next = (struct node *) malloc( sizeof(struct node) );  

        last = last->next;

        last->value = rand() % 10 ;  

        last->next = NULL;

    }

        struct node *new = (struct node *)malloc( sizeof(struct node) );

        new->value = 13;

        new->next='\0';

        new->next = root;

        root=new;

    last = root;

    int i;

    for(i=0;last;last = last->next){  

        printf("Node %d has value of %d\n", i++,last->value);

    }

        

   return 0;

}