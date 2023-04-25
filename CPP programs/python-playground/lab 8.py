#LAB4 / PS8

def main():
    add_coffee()
    del_coffee()
    mod_coffee()
    search()
    show()

def add_coffee():
    another = 'y'
    coffee_file = open('coffee.txt','a')
    
    while another == 'y' or another == 'Y':
        print('Enter the following coffee data:')
        descr = input('Description: ')
        qty = int(input('Quantity (in pounds): '))

        coffee_file.write(descr + '\n')
        coffee_file.write(str(qty) + '\n')
    
        print('Do you want to add another record?')
        another = input('Y = yes, anything else = no: ')
    
    coffee_file.close()
    print('Data appended to coffee.txt.')

import os

def del_coffee():
    found = False
    search = input('Which coffee do you want to delete? ')
    coffee_file = open('coffee.txt', 'r')
    temp_file = open('temp.txt', 'w')
    descr = coffee_file.readline()
    
    while descr != '':
        qty = float(coffee_file.readline())
        descr = descr.rstrip('\n')
    
        if descr != search:
            temp_file.write(descr + '\n')
            temp_file.write(str(qty) + '\n')
            
        else:
            found = True
        
        descr = coffee_file.readline()
    
    coffee_file.close()
    temp_file.close()
    
    os.remove('coffee.txt')
    
    os.rename('temp.txt', 'coffee.txt')
    
    if found:
        print('The file has been updated.')
        
    else:
        print('That item was not found in the file.')

import os

def mod_coffee():
    found = False
    search = input('Enter a description to search for: ')
    new_qty = int(input('Enter the new quantity: '))
    coffee_file = open('coffee.txt', 'r')
    temp_file = open('temp.txt', 'w')
    descr = coffee_file.readline()
    
    while descr != '':
        qty = float(coffee_file.readline())
        descr = descr.rstrip('\n')
        
        if descr == search:
            temp_file.write(descr + '\n')
            temp_file.write(str(new_qty) + '\n')
            
            found = True
        else:
            temp_file.write(descr + '\n')
            temp_file.write(str(qty) + '\n')
        
        descr = coffee_file.readline()
    
    coffee_file.close()
    temp_file.close()
    
    os.remove('coffee.txt')
    os.rename('temp.txt', 'coffee.txt')
    
    if found:
        print('The file has been updated.')
    else:
        print('That item was not found in the file.')

def search():
    found = False
    search = input('Enter a description to search for: ')
    coffee_file = open('coffee.txt', 'r')
    descr = coffee_file.readline()
    
    while descr != '':
        qty = float(coffee_file.readline())
        descr = descr.rstrip('\n')

        if descr == search:
            print('Description:', descr)
            print('Quantity:', qty)
            print()
                
            found = True

        descr = coffee_file.readline()

    coffee_file.close()
    if not found:
        print('That item was not found in the file.')

def show():
    coffee_file = open('coffee.txt', 'r')
    descr = coffee_file.readline()
    
    while descr != '':
        qty = float(coffee_file.readline())
        descr = descr.rstrip('\n')
        
        print('Description:', descr)
        print('Quantity:', qty)
        
        descr = coffee_file.readline()
    
    coffee_file.close()

if __name__=='__main__':
    main()

##>>> 
##============== RESTART: /Users/alieshghi/Desktop/LAB 4/lab 8.py ==============
##Enter the following coffee data:
##Description: Sumatra Medium Roast
##Quantity (in pounds): 45
##Do you want to add another record?
##Y = yes, anything else = no: y
##Enter the following coffee data:
##Description: Turkish
##Quantity (in pounds): 55
##Do you want to add another record?
##Y = yes, anything else = no: y
##Enter the following coffee data:
##Description: Brazilian
##Quantity (in pounds): 40
##Do you want to add another record?
##Y = yes, anything else = no: y
##Enter the following coffee data:
##Description: black
##Quantity (in pounds): 33
##Do you want to add another record?
##Y = yes, anything else = no: n
##Data appended to coffee.txt.
##Which coffee do you want to delete? 
##That item was not found in the file.
##Enter a description to search for: Turkish
##Enter the new quantity: 60
##The file has been updated.
##Enter a description to search for: black
##Description: black
##Quantity: 33.0
##
##Description: Sumatra Medium Roast
##Quantity: 25.0
##Description: Good
##Quantity: 45.0
##Description: Sumatra Medium Roast
##Quantity: 25.0
##Description: Good
##Quantity: 45.0
##Description: Sumatra Medium Roast
##Quantity: 45.0
##Description: Brazilian
##Quantity: 70.0
##Description: Turkish
##Quantity: 60.0
##Description: Sumatra Regular
##Quantity: 10.0
##Description: Sumatra Medium Roast
##Quantity: 45.0
##Description: Turkish
##Quantity: 60.0
##Description: Brazilian
##Quantity: 40.0
##Description: black
##Quantity: 33.0
##>>> 
