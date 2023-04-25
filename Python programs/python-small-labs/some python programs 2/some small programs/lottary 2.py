#Ali Eshghi  
#1112261
#Lottery program      


import random
#input
lot_num=random.randint(10,99)
pers_num=int(input("Enter a two-digit number between 10 - 99 : "))
awrd_1=10000
awrd_2=3000
awrd_3=1000

#calc and output
if pers_num == lot_num:
    print("You have won $",awrd_1,sep='')
elif pers_num%10 == lot_num//10 and pers_num//10 == lot_num%10:
    print("You have won $",awrd_2,sep='')
elif pers_num%10 == lot_num%10:
    print("You have won $",awrd_3,sep='')
elif pers_num//10 == lot_num//10:
    print("You have won $",awrd_3,sep='')
elif pers_num%10 == lot_num//10:
    print("You have won $",awrd_3,sep='')
elif pers_num//10 == lot_num%10:
    print("You have won $",awrd_3,sep='')
else:
    print("it wasn't that loser,")
print("The lucky number was : ",lot_num)

##========== RESTART: /Users/alieshghi/Desktop/homework2/lottary 2.py ==========
##Enter a two-digit number between 10 - 99 : 56
##You have won $3000
##The lucky number was :  65
##>>> 

##========== RESTART: /Users/alieshghi/Desktop/homework2/lottary 2.py ==========
##Enter a two-digit number between 10 - 99 : 33
##it wasn't that loser,
##The lucky number was :  10
##>>> 
