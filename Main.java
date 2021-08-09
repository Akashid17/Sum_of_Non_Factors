
import java.lang.*;
import java.io.*;

class Main
{
    public static void main(String args[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iValue = 0;

        try
        {
            System.out.println("Enter Number");
            iValue = Integer.parseInt(bobj.readLine());
        }
        catch(Exception eobj)
        {}

        ArithmeticX aobj = new ArithmeticX();
        int iRet = aobj.SumNonFactors(iValue);

        System.out.println(iRet);
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

        while(i < iNo)
        {
            if(iNo%i != 0)
            {
                iSum = iSum + i;
            }

            i++;
        }
        return iSum;
    }
}