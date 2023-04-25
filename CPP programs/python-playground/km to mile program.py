#LAB PART 10

strt=60
stp=131
incrmnt=10
fctr=0.6214

print("kmph \t mph")
print("-------------")

for kph in range(strt,stp,incrmnt):
    mph=kph*fctr
    print(kph,'\t',format(mph,'.1f'))

##>>> 
##===== RESTART: /Users/alieshghi/Desktop/Lab 2.Ali/km to mile program.py =====
##kmph 	 mph
##-------------
##60 	 37.3
##70 	 43.5
##80 	 49.7
##90 	 55.9
##100 	 62.1
##110 	 68.4
##120 	 74.6
##130 	 80.8
##>>> 
