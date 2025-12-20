#include<stdio.h>
#include<stdlib.h> 

typedef struct node 
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE ,**PPNODE;

void Insert(PPNODE Head , int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc (sizeof(NODE));
    newn->data =no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if( *Head==NULL) //  BST Contain atleast one  Node;
    {
        *Head = newn;
    }
    else
    {
        while(1) // uncontional loop mahit nahi kiti vela firaycha ahe tymule 
        {
            if(no==temp->data)
            {
                printf("Unable to insert as data is already present\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn ;
                    break;
                }
               temp = temp->rchild;
            }
            else if(no < temp->data)
            {   if(temp -> lchild ==NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp ->lchild;
            }
        }
    }
}
void Inorder(PNODE Head)
{
    if(Head !=NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }

}

int main()
{
    PNODE first = NULL;

    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);

    Inorder(first);
    

    
    return 0;
}