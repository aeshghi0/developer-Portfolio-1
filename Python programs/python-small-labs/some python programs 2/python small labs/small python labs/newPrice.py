
prc = 1.025
x='y'

while x=='y' or x=="Y":
    wholesale = float(input("Enter the item's wholesale cost: "))
    while wholesale < 0:
        print('ERROR: the cost cannot be negative.')
        wholesale = float(input('Enter the correct wholesale cost:'))
    retail = wholesale * prc
    print('Retail price: $', retail)
    x = input('Do you have another item? (Enter y for yes): ')
