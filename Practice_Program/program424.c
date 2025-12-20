#include<stdio.h>
void Factorsf(int iValue)
{
    int i =1;

    for(i=1;i<=iValue/2;i++)
    {
        if(iValue % i ==0)
        {
            printf("%d\t",i);
        }
    }
}
void Factorsw(int iRet)
{
    int i =0;

    while(i<=iRet/2)
    {
        if(iRet % i==0)
        {
            printf("%d\t",i);
        }
    }
}
int FactorsR(int iValue)
{
    static int i =1;
    int isum =0;
    
    if(i<=iValue /2)
    {
        if((iValue % i) ==0)
        {
            isum = isum +i;
        }
        i++;
        FactorsR(iValue);
    }
    return isum;
}
int main()
{
    int iNo =0;
    int iRes = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iNo);
 
    iRes =FactorsR(iNo);
    printf("The Addtion of Factor is %d",iRes);


   
}