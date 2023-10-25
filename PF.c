#include<stdio.h>

int Addition(int iVal1 , int iVal2)
{
    int iRet = 0;
    iRet = iVal1 + iVal2;
    return iRet;
} 

int main()
{
    int iNo1 = 0 ; int iNo2 = 0 ; int iAns = 0;

    printf("\n Enter First Number :");
    scanf("%d",&iNo1);

    printf("\n Enter Second Number :");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1 , iNo2);

    printf("\n Addition is : %d",iAns);

    return 0;
}