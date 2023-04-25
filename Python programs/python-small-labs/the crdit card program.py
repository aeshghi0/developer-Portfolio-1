#Homework 3 set 3

def isValid(number:str):
    total_even=sumOfDoubleEvenplace(number)
    total_odd=sumOfOddPlace(number)
    total=total_even+total_odd
    
    if total%10==0:
        return True
    else:
        return False



def sumOfDoubleEvenplace(number:str)->int:
    even_sum=getDigit(number)
    return even_sum


def getDigit(number:str)->int:
    total_even=0
    if len(number)%2==0:
        for ch in range(len(number)-1,-1,-2):
            total_even=(ch%10+ch/10)+total_even
    elif len(number)%2==1:
        for ch in range(len(number)-1,0,-2):
            total_even=(ch%10+ch/10)+total_even
    return total_even


  
def sumOfOddPlace(number:str)->int:
    total_odd=0
    if len(number)%2==0:
        for ch in range(len(number)-2,0,-2):
            total_odd=ch+total_odd
    elif len(number)%2==1:
        for ch in range(len(number)-2,-1,-2):
            total_odd=ch+total_odd
    return total_odd






def main():
    number=input("please enter the credit card number: ")

    if number.startswith("4") or number.startswith("5") or number.startswith("37") or number.startswith("6"):
        if len(number)>=13 and len(number)<=16:
            if isValid(number)==True:
                print(number,"is valid")
            else:
                print(number,"is invalid")

if __name__=='__main__':
    main()

##>>> 
##====== RESTART: /Users/alieshghi/Desktop/HW3/the crdit card program.py ======
##please enter the credit card number: 478843214081273
##478843214081273 is invalid
##>>> 
