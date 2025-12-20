#include<stdio.h>
int FactorsR(int iValue)
{
    static int i =1;
    static int isum =0;
    
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