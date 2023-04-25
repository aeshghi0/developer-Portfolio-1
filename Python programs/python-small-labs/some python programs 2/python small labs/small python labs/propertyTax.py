# This program displays property taxes
#input
tax_factor = 0.0065
print("Enter the property lot number (enter 0 to end)")
prop_num = int(input('Enter the lot number: '))
                     
while prop_num !=0 :
    value=float(input('Enter the property value: '))

    tax=value*tax_factor
    
    print('Property tax: $', format(tax, ',.2f'), sep='')
    print('Enter the next lot number or nter 0 to end.')
    prop_num = int(input('Lot number: '))
