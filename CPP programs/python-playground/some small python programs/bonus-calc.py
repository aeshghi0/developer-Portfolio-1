#Ali Eshghi
#1112261
#the program that shows two choices for the programer

#input
name=(input("please enter the sales associate's name:   "))
sales=float(input("please enter the flash sales:   "))

if sales>50000:
    bonus=sales*0.1
    print("the associate's bonus is going to be $",bonus)
    print("\n",name,"Has met the sales requirement")
else:    
    print(name," has not met the sales requirement")
