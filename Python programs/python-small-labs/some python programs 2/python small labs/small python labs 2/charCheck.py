#input

kk=input("Enter any character : ")

#output

if kk>='A' and kk<='Z' :
    print("A UPPER case charcter was entered")
elif kk>='a' and kk<='z':
    print("A lower case charcter was entered")
elif kk>='0' and kk<='9':
    print("A number was entered")
else :
    print("Other characters")
