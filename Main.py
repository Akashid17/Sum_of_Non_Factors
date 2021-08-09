
def SumNonFactors(iNo):

    if iNo < 0:
        iNo = -iNo

    iSum = 0

    for x in range(1,iNo):
        if iNo%x != 0:
            iSum += x

    return iSum

def main():

    iValue = int(input("Enter Number\n"))

    print(SumNonFactors(iValue))
    
if __name__ == "__main__":

    main()