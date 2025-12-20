#include<stdio.h>
int EvenCount(int *Arr,int iSize)
{
     int iCnt =0;
     int iEven =0;

    while(iCnt<iSize)
    {
       if((Arr[iCnt] % 2)==0)
       {
            iEven++;
       }
       iCnt++;
    }
    return iEven;
}

int main()
{
    int Arr[5]={10,21,30,40,55};
    int iRes =0;
    iRes=EvenCount(Arr,5);

    printf("Even Count  of Array is %d",iRes);

    return 0;
}