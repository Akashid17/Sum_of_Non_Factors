
#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i < iNo; i++)
    {
        if(iNo%i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("%d\n",iRet);

    return 0;
}