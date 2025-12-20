#include<stdio.h>
int EvenCount(int *Arr,int iSize)
{
    static int iCnt =0;
    static int iEven =0;

    if(iCnt<iSize)
    {
       if((Arr[iCnt] % 2)==0)
       {
            iEven++;
       }
       iCnt++;
       EvenCount(Arr,iSize);
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