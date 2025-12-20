#include<stdio.h>
int Strlenx(char *str)
{
    int iCnt =0;

    while(*str !='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
     char Arr[20];
     int iRes =0;
    
    printf("Enter the String.\n");
    scanf("%[^'\n']s",Arr);

    iRes = Strlenx(Arr);
    printf("The Length of String is %d",iRes);

    return 0;
}