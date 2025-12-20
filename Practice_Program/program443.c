#include<stdio.h>
int CountCapital(char *str)
{
   static  int iCnt =0;

    if(*str !='\0')
    {
        if(((*str >='A')&&(*str<='Z')))
        {
            iCnt++;    
        }
        str++;
        CountCapital(str);

    }
    return iCnt;
}

int main()
{
     char Arr[20];
     int iRes =0;
    
    printf("Enter the String.\n");
    scanf("%[^'\n']s",Arr);

    iRes = CountCapital(Arr);
    printf("The Capital Count Letter is %d",iRes);

    return 0;
}