#lab 7

price=1.025
x='y'

while x=='y' or x=="Y":
    whole_sale = float(input("Enter the item's wholesale cost: "))
    while whole_sale<0:
        print('ERROR: the cost cannot be negative.')
        whole_sale=float(input('Enter the correct wholesale cost:'))
    retail=whole_sale*price
    print('ReETAIL PRICE: $',retail)
    x=input('Do you have another item? (Enter y for yes): ')

##>>> 
##===== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/whole sale program.py =====
##Enter the item's wholesale cost: -500
##ERROR: the cost cannot be negative.
##Enter the correct wholesale cost:500
##ReETAIL PRICE: $ 512.5
##Do you have another item? (Enter y for yes): y
##Enter the item's wholesale cost: 5000
##ReETAIL PRICE: $ 5125.0
##Do you have another item? (Enter y for yes): n
##>>> 
