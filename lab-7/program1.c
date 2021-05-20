#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void displayList(int m);

int main()
{
    int n;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    int m;
    printf("enter the number u want to search\n");
    scanf("%d",&m);
    
    displayList(m);


    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        tmp = stnode;

        
        
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList(int m)
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        int count =0;
        while(tmp != NULL)
        {
          if(tmp->num == m){
          count++;
          
          }
          tmp = tmp->nextptr;
        }
        printf("%d had repeted %d times\n",m,count);
    }
    
}



