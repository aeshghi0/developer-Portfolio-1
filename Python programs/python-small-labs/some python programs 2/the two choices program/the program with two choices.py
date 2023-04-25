#Ali Eshghi
#1112261
#the program that shows two choices for the programer

#input
name=(input("please enter the sales associate's name:   "))
sales=float(input("please enter the flash sales:   "))

if sales>50000:
    bonus=input(float(sales*0.1))
    commision_rate=0.12
    print(name,"\n has met the the sales goal")
print(name,"\n has not met the sales requirement")
