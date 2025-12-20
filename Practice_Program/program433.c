#include<stdio.h>

void Display(int *Arr,int iSize)
{
   static  int i =0;

    if(i<iSize)
    {
        printf("%d\t",Arr[i]);
        i++;
        Display(Arr,iSize);
    }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    Display(Arr,5);

    return 0;
}