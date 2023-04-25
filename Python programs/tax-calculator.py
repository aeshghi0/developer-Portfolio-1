{\rtf1\ansi\ansicpg1252\cocoartf1561\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #Ali Eshghi\
#Homework 2 set 4\
#1112261\
\
\
#input\
income=int(input("enter the income as an integer with no commas: "))\
\
#calc\
tax_17=0\
tax_18=0\
    \
while income>=0:\
    tax1=10*income/100\
    tax2=((9525*10/100)+((income-9526)*12/100))\
    tax3=((9525*10/100)+(38700*12/100)+((income-38701)*22/100))\
    tax4=((9525*10/100)+(38700*12/100)+(82500*22/100)+((income-82501)*24/100))\
    tax5=((9525*10/100)+(38700*12/100)+(82500*22/100)+(157500*24/100)+((income-157501)*32/100))\
    tax6=((9525*10/100)+(38700*12/100)+(82500*22/100)+(157500*24/100)+(200000*32/100)+((income-200001)*35/100))\
    tax7=((9525*10/100)+(38700*12/100)+(82500*22/100)+(157500*24/100)+(200000*32/100)+(500000*35/100)+((income-500000)*37/100))\
\
#2017 incom tax formulas\
    tax11=income*10/100\
    tax12=((9325*10/100)+((income-9326)*15/100))\
    tax13=((9325*10/100)+(37950*15/100)+((income-37951)*25/100))\
    tax14=((9325*10/100)+(37950*15/100)+(91900*25/100)+((income-91901)*28/100))\
    tax15=((9325*10/100)+(37950*15/100)+(91900*25/100)+(191650*28/100)+((income-191651)*33/100))\
    tax16=((9325*10/100)+(37950*15/100)+(91900*25/100)+(191650*28/100)+(416700*33/100)+((income-416701)*35/100))\
    tax17=((9325*10/100)+(37950*15/100)+(91900*25/100)+(191650*28/100)+(416700*33/100)+(418400*35/100)+((income-418401)*39.6/100))\
\
#difference and the percentage formula\
#tax 2017\
    if income<=9325:\
        tax_17=tax11\
    elif income<=37950:\
        tax_17=tax12\
    elif income<=91900:\
        tax_17=tax13\
    elif income<=191650:\
        tax_17=tax14\
    elif income<=416700:\
        tax_17=tax15\
    elif income<=418400:\
        tax_17=tax16\
    elif income>=418401:\
        tax_17=tax17\
\
#tax 2018\
    if income<=9525:\
        tax_18=tax1\
    elif income<=38700:\
        tax_18=tax2\
    elif income<=82500:\
        tax_18=tax3\
    elif income<=157500:\
        tax_18=tax4\
    elif income<=200000:\
        tax_18=tax5\
    elif income<=500000:\
        tax_18=tax6\
    elif income>500000:\
        tax_18=tax7\
\
\
    tax_diff=tax_18-tax_17\
    tax_perc_diff=((tax_diff)/((tax_18+tax_17)/2))*100\
\
#2017 income tax    \
    if income<=9325:\
        print("your 2017 tax is $",format(tax11,',.2f'),sep='')\
    elif income<=37950:\
        print("your 2017 tax is $",format(tax12,',.2f'),sep='')\
    elif income<=91900:\
        print("your 2017 tax is $",format(tax13,',.2f'),sep='')\
    elif income<=191650:\
        print("our 2017 tax is $",format(tax14,',.2f'),sep='')\
    elif income<=416700:\
        print("our 2017 tax is $",format(tax15,',.2f'),sep='')\
    elif income<=418400:\
        print("our 2017 tax is $",format(tax16,',.2f'),sep='')\
    elif income>=418401:\
        print("our 2017 tax is $",format(tax17,',.2f'),sep='')\
\
#2018 income tax\
    if income<=9525:\
        print("your 2018 tax is $",format(tax1,',.2f'),sep='')\
    elif income<=38700:\
        print("your 2018 tax is $",format(tax2,',.2f'),sep='')\
    elif income<=82500:\
        print("your 2018 tax is $",format(tax3,',.2f'),sep='')\
    elif income<=157500:\
        print("your 2018 tax is $",format(tax4,',.2f'),sep='')\
    elif income<=200000:\
        print("your 2018 tax is $",format(tax5,',.2f'),sep='')\
    elif income<=500000:\
        print("your 2018 tax is $",format(tax6,',.2f'),sep='')\
    elif income>500000:\
        print("your 2018 tax is $",format(tax7,',.2f'),sep='')\
    \
    print("Difference:  ",format(tax_diff,',.2f'))\
    print("DIfference(percentage):  ",format(tax_perc_diff,'.2f'),"\\n\\n\\n")\
    income=int(input("enter the income as an integer with no commas: "))\
\
\
\
\
\
\
\
\
\
\
##=== RESTART: /Users/alieshghi/Desktop/cs10/homework2/two types of taxes.py ===\
##enter the income as an integer with no commas: 8000\
##your 2017 tax is $800.00\
##your 2018 tax is $800.00\
##Difference:   0.00\
##DIfference(percentage):   0.00 \
##\
##\
##\
##enter the income as an integer with no commas: 15000\
##your 2017 tax is $1,783.60\
##your 2018 tax is $1,609.38\
##Difference:   -174.22\
##DIfference(percentage):   -10.27 \
##\
##\
##\
##enter the income as an integer with no commas: 40000\
##your 2017 tax is $7,137.25\
##your 2018 tax is $5,882.28\
##Difference:   -1,254.97\
##DIfference(percentage):   -19.28 \
##\
##\
##\
##enter the income as an integer with no commas: 100000\
##our 2017 tax is $31,867.72\
##your 2018 tax is $27,946.26\
##Difference:   -3,921.46\
##DIfference(percentage):   -13.11 \
##\
##\
##\
##enter the income as an integer with no commas: 200000\
##our 2017 tax is $86,017.17\
##your 2018 tax is $75,146.18\
##Difference:   -10,870.99\
##DIfference(percentage):   -13.49 \
##\
##\
##\
##enter the income as an integer with no commas: 500000\
##our 2017 tax is $399,526.20\
##your 2018 tax is $230,546.15\
##Difference:   -168,980.05\
##DIfference(percentage):   -53.64 \
##\
##\
##\
##enter the income as an integer with no commas: 1000000\
##our 2017 tax is $597,526.20\
##your 2018 tax is $485,546.50\
##Difference:   -111,979.70\
##DIfference(percentage):   -20.68 \
##\
##\
##\
##enter the income as an integer with no commas: -1\
##>>> }