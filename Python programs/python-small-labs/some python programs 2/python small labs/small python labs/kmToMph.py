start=60
stop=131
increment=10
factor=0.6214

print("KPH \t MPH")
print("-------------")

for kph in range(start,stop,increment):
    mph=kph*factor
    print(kph,'\t',format(mph,'.1f'))
