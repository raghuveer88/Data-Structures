#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void alternatenode(struct node* stnode);

int main()
{
    int n;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("the alternate node data are\n");
    alternatenode(stnode);
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
  void alternatenode(struct node* stnode)
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        printf("%d, ", tmp->num);
        alternatenode(tmp->nextptr->nextptr);
    }
}