#Ali Eshghi
#1112261
#a program that calculate the the average of test scores and out put of grades

#input
test1=int(input("enter the test score:  "))
test2=int(input("enter the test score:  "))
test3=int(input("enter the test score   "))

#calculation of total average
total=test1+test2+test3
avg=total/3

#compare and output grade
if 90<=avg<=100 and avg>=100:
    print('A')
if 80<=avg<=89:
    print('B')
if 70<=avg<=79:
    print("C")
if avg<=69 and avg==0:
    print('F')
