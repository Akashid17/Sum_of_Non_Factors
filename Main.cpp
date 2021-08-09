
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int SumNonFactors(int);
};

int ArithmeticX::SumNonFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iSum = 0;

    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
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

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    iRet = aobj.SumNonFactors(iValue);

    cout<<iRet<<endl;

    return 0;
}