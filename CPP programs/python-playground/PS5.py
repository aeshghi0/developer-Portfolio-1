#LAB4 / PS5

def readValues() -> list:
    num_list=[]
    qte=""
    while qte.upper()!="Q":
        qte = input ("enter a value,(enter Q to quit): ")
        if qte.upper() != "Q":
            num_list.append(float(qte))
    return num_list

def findLargest(num_list:list) -> float:
    high_num = max(num_list)

    return high_num

def display(num_list:list, high_num:float) -> None:
    new_high_num = str(high_num) + ' <== This is the largest number'
    check_list = []
    for i in num_list:
        if i != high_num:
            check_list.append(i)
        elif i == high_num:
            check_list.append(new_high_num)

    print("Here are the numbers in the list: ")
    for i in check_list:
        print(i)
        
def main():
    num_list = readValues()
    high_num = findLargest(num_list)
    display(num_list,high_num)

if __name__=="__main__":
    main()


##>>> 
##=============== RESTART: /Users/alieshghi/Desktop/LAB 4/PS5.py ===============
##enter a value,(enter Q to quit): 4
##enter a value,(enter Q to quit): 54
##enter a value,(enter Q to quit): 76
##enter a value,(enter Q to quit): 23
##enter a value,(enter Q to quit): 8
##enter a value,(enter Q to quit): 44
##enter a value,(enter Q to quit): 1
##enter a value,(enter Q to quit): q
##Here are the numbers in the list: 
##4.0
##54.0
##76.0 <== This is the largest number
##23.0
##8.0
##44.0
##1.0
##>>> 
