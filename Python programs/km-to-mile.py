{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #Ali Eshghi\
#1112261\
\
#Lab 1\
\
#input\
\
age=int(input("Enter the age : "))\
\
#calc\
\
agecheck=age-18\
\
#output\
\
if agecheck<0:\
    print("You have to wait",-agecheck,"years to cast your vote")\
else:\
    print("you are eligible to vote")\
\
    \
## >>> \
##====== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/SIKIM CO first pg.py ======\
##Enter the age : 24\
##you are eligible to vote\
##>>> \
##====== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/SIKIM CO first pg.py ======\
##Enter the age : 12\
##You have to wait 6 years to cast your vote\
##>>>    \
\
\
\
\
\
#lab 2\
\
#input\
nums=int(input("please enter the number: "))\
\
#calc\
\
evenodd=nums%2\
\
#output\
\
if evenodd==0:\
    print("The number is even")\
else:\
    print("The number is odd")\
\
##>>> \
##======= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/even odd number.py =======\
##please enter the number: 44\
##The number is even\
##>>> \
##======= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/even odd number.py =======\
##please enter the number: 55\
##The number is odd\
##>>> \
\
\
\
#lab 3\
\
#input\
\
letter=input("enter the character: ")\
\
#output\
if letter=='e':\
    print("the",letter,"is vowel")\
elif letter=='a':\
    print("the",letter,"is vowel")\
elif letter=='i':\
    print("the",letter,"is vowel")\
elif letter=='o':\
    print("the",letter,"is vowel")\
elif letter=='u':\
    print("the",letter,"is vowel")\
else:\
    print("the",letter,"is not a vowel")\
\
\
##>>> \
##======= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/sikim co #3 pg.py =======\
##enter the character: e\
##the e is vowel\
##>>> \
##======= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/sikim co #3 pg.py =======\
##enter the character: f\
##the f is not a vowel\
##>>>    \
\
\
#Lab 4\
\
#input\
\
kk=input("Enter any character : ")\
\
#output\
\
if kk>='A' and kk<='Z' :\
    print("A UPPER case charcter was entered")\
elif kk>='a' and kk<='z':\
    print("A lower case charcter was entered")\
elif kk>='0' and kk<='9':\
    print("A number was entered")\
else :\
    print("Other characters")\
\
    \
##>>> \
##========= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/SIKIM CO #4.py =========\
##Enter any character : C\
##A UPPER case charcter was entered\
##>>> \
\
\
#lab 5\
\
\
base=int(input("Enter the base size : "))\
\
print("*"*base)\
\
##>>> \
##========== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/Number 1.py ==========\
##Enter the base size : 23\
##***********************\
##>>> \
\
\
\
#lab 6\
\
prop_value=float(input("enter the property value: "))\
#input\
while prop_value!=-999:\
    \
    lot=int(input("enter the lot number: "))\
    prop_tax=prop_value*0.0065\
\
#output\
    print("the lot number is",lot)\
    print("the property tax is $",prop_tax,"\\n\\n")\
\
    prop_value=float(input("enter the property value: "))\
\
    \
\
\
##>>> \
##============= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/tax.py =============\
##enter the property value: 100000.00\
##enter the lot number: 100\
##the lot number is 100\
##the property tax is $ 650.0 \
##\
##\
##enter the property value: \
\
\
\
\
#lab 7\
\
price=1.025\
x='y'\
\
while x=='y' or x=="Y":\
    whole_sale = float(input("Enter the item's wholesale cost: "))\
    while whole_sale<0:\
        print('ERROR: the cost cannot be negative.')\
        whole_sale=float(input('Enter the correct wholesale cost:'))\
    retail=whole_sale*price\
    print('ReETAIL PRICE: $',retail)\
    x=input('Do you have another item? (Enter y for yes): ')\
\
##>>> \
##===== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/whole sale program.py =====\
##Enter the item's wholesale cost: -500\
##ERROR: the cost cannot be negative.\
##Enter the correct wholesale cost:500\
##ReETAIL PRICE: $ 512.5\
##Do you have another item? (Enter y for yes): y\
##Enter the item's wholesale cost: 5000\
##ReETAIL PRICE: $ 5125.0\
##Do you have another item? (Enter y for yes): n\
##>>> \
\
#lab 8\
for word in range(5):\
    print("Barzinger")\
\
\
##>>> \
##======= RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/the Barizinger.py =======\
##Barzinger\
##Barzinger\
##Barzinger\
##Barzinger\
##Barzinger\
##\
##>>> \
\
\
#lab 9\
\
rang=int(input("how many numbers you want to add up:  "))\
\
tot=0.0\
\
print("this program calculates the sum of ",rang," numbers you will enter")\
\
for counter in range(rang):\
    number=int(input("enter the number:  "))\
    tot=tot+number\
\
print("the total sum of numbers you entereed is: ",tot)\
\
\
\
\
\
##>>> \
## RESTART: /Users/alieshghi/Desktop/cs10/if else aleeee sikim/sum of numbers.py \
##how many numbers you want to add up:  2\
##this program calculates the sum of  2  numbers you will enter\
##enter the number:  3\
##enter the number:  5\
##the total sum of numbers you entereed is:  8.0\
##>>> \
\
\
\
\
#LAB PART 10\
\
strt=60\
stp=131\
incrmnt=10\
fctr=0.6214\
\
print("kmph \\t mph")\
print("-------------")\
\
for kph in range(strt,stp,incrmnt):\
    mph=kph*fctr\
    print(kph,'\\t',format(mph,'.1f'))\
\
##>>> \
##===== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/km to mile program.py =====\
##kmph 	 mph\
##-------------\
##60 	 37.3\
##70 	 43.5\
##80 	 49.7\
##90 	 55.9\
##100 	 62.1\
##110 	 68.4\
##120 	 74.6\
##130 	 80.8\
##>>> }