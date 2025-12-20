#include<stdio.h>
void DisplayR(int iNo)
{
    int iDigit =0;

    if(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10;
        
        DisplayR(iNo);
    }
}

int main()
{
    int iValue= 0;

    printf("ENter the Number \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}