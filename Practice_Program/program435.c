#include<stdio.h>
int Arraysum(int *Arr,int iSize)
{
     int iSum =0;
     int i =0;

    while(i<iSize)
    {
        iSum = iSum+Arr[i];
        i++;
    }
    return iSum;
}

int main()
{
    int Arr[5]={10,20,30,40,50};
    int iRes =0;


    iRes=Arraysum(Arr,5);

    printf("Addtion of Array is %d",iRes);

    return 0;
}