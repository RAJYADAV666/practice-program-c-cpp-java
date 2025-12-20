#include<stdio.h>
#include<stdlib.h> 
#include<stdbool.h>

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
void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\n",Head->data);
        Inorder(Head->lchild);
        Inorder(Head->rchild);
    }
}
void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        Inorder(Head->rchild);
        printf("%d",Head->data);
    }
}
bool Search(PNODE Head , int no)
{
    bool flag = false;

    if(Head ==NULL) //  ek he element nasel teva
    {
        printf("Tree is empty..\n");
    }

    while(Head !=NULL)
    {
        if(no==Head->data)
        {
            flag = true;
            break;
        }
        else if(no > Head->data)
        {
            Head = Head->rchild;
        }
        else if(no < Head->data)
        {
            Head = Head->lchild;
        }
    }
    return flag;
}
int Count(PNODE Head)
{
    static int iCnt =0;

    if(Head !=NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);  
    }
    return iCnt;

}
int Countleaf(PNODE Head)
{
    static int iCnt =0;

    if(Head !=NULL)
    {
       if((Head->lchild == NULL && Head->rchild ==NULL))
       {
         iCnt++;
       
       }
        Countleaf(Head->lchild);
        Countleaf(Head->rchild);
    }
        
    return iCnt;
}
int CountParentNode(PNODE Head)
{
    static int iCnt =0;

    if(Head !=NULL)
    {
       if(Head->lchild != NULL || Head->rchild !=NULL) 
       {
         iCnt++;
       
       }
        CountParentNode(Head->lchild);
        CountParentNode(Head->rchild);
    }
        
    return iCnt;
}

int main()
{
    PNODE first = NULL;
    int iRet =0;
    bool bret = false;

    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,17);
    Insert(&first,45);
    Insert(&first,10);
    Insert(&first,78);
    Insert(&first,30);
    Insert(&first,5);
    Insert(&first,11);

    Inorder(first);

    iRet =CountParentNode(first);

    printf("Number of  Parent Node  are :%d\n",iRet);

    
    return 0;
}