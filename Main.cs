
using System;

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());
		
		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.SumNonFactors(iValue);

		Console.WriteLine(iRet);
	}
}

class ArithmeticX
{
	public int SumNonFactors(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		int i = 1;
		int iSum = 0;

		do
		{
			if(iNo % i != 0)
			{
				iSum = iSum + i;
			}

			i++;
		}while(i < iNo);
		
		return iSum;
	}
}