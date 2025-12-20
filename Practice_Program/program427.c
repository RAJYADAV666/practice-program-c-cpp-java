#include<stdio.h>
int SumDigitR(int iNo)
{
    int iDigit =0;
    static int iSum=0;

    if(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum = iSum +iDigit;
        iNo = iNo /10;
        
        SumDigitR(iNo);
    }

    return iSum;
}

int main()
{
    int iValue= 0;
    int iRet =0;

    printf("ENter the Number \n");
    scanf("%d",&iValue);

      iRet = SumDigitR(iValue);
      printf("Summation of Digit is %d",iRet);

    return 0;
}